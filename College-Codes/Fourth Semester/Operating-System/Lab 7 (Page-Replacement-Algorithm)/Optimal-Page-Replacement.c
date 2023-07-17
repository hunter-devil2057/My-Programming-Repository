#include <stdio.h>      //header file for standard input/output
#include<conio.h>       //header file for console input/outupt
int main()
{
    int referenceString[10], pageFaults = 0, m, n, s, pages, frames;
    printf("Enter the Number of Pages:");
    scanf("%d", &pages);    //receiving the value of number of pages. 
    printf("Enter the values present in Reference String:\n");
    for( m = 0; m < pages; m++){
        printf("Value No. [%d]:\t", m + 1);
        scanf("%d", &referenceString[m]);   //receiving the values present in Reference String (Array)
    }
    printf("What are the total number of frames?:\n");
    {
        scanf("%d", &frames);
    }
    int temp[frames];
    for(m = 0; m < frames; m++){
        temp[m] = -1;
    }
    for(m = 0; m < pages; m++){
        s = 0;
        for(n = 0; n < frames; n++){
            if(referenceString[m] == temp[n]){
                s++;
                pageFaults--;
            }}
        pageFaults++;
        if((pageFaults <= frames) && (s == 0)){
            temp[m] = referenceString[m];
        }
        else if(s == 0){
            temp[(pageFaults - 1) % frames] = referenceString[m];
        }
        printf("\n");
        for(n = 0; n < frames; n++){
            printf("%d\t", temp[n]);
        }}
    printf("\nTherefore,\n\tTotal Page Faults:\t%d\n", pageFaults);
    printf("Name: Manish\tSymbol No.: 26448/077\tLab Report No.: 7");
    return 0;
}
