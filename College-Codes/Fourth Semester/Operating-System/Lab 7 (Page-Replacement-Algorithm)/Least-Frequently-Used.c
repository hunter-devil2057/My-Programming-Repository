#include <stdio.h>
#include <stdlib.h>
#define MAX_PAGES 100
struct Page{
	int page, freq, last_used;
};
int findPage(struct Page pages[], int size, int key)
{
	for (int i = 0; i < size; i++){
		if (pages[i].page == key) return i;
	}
	return -1;
}
int findLFUPage(struct Page pages[], int size){
	int min_freq = pages[0].freq, min_last_used = pages[0].last_used, min_index = 0;
	for (int i = 1; i < size; i++){
		if (pages[i].freq < min_freq || (pages[i].freq == min_freq && pages[i].last_used < min_last_used)){
			min_freq = pages[i].freq;
			min_last_used = pages[i].last_used;
			min_index = i;
		}}
	return min_index;
}
void applyLFU(int pages[], int n, int fn){
	struct Page table[MAX_PAGES];
	int tableSize = 0, pageFaults = 0;
	for (int i = 0; i < n; i++){
		int pageIndex = findPage(table, tableSize, pages[i]);
		if (pageIndex == -1){
			if (tableSize < fn){
				table[tableSize].page = pages[i];
				table[tableSize].freq = 1;
				table[tableSize].last_used = i;
				tableSize++;
			}
			else{
				int replace = findLFUPage(table, tableSize);
				table[replace].page = pages[i];
				table[replace].freq = 1;
				table[replace].last_used = i;
			}
			pageFaults++;
		}
		else{
			table[pageIndex].freq++;
			table[pageIndex].last_used = i;
		}}
	printf("Page Faults = %d\n", pageFaults);
	printf("Page Hits = %d\n", n - pageFaults);
}
int main()
{
	int pages[] = {7, 0, 2, 4, 3, 1, 4, 7, 2, 0, 4, 3, 0, 3, 2, 7};
	int n = 16;
	int fn = 3;
	applyLFU(pages, n, fn);
    printf("Name: Manish Shiwakoti\tSymbol No.: 26448/077\tLab Report No.: 7");
	return 0;
}
