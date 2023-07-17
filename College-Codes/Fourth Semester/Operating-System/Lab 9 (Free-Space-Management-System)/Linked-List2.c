#include <stdio.h>
#include<conio.h>
#include <stdlib.h>

struct  Node{
	int block_number;
	struct  Node *next;
};

void addBlock(struct Node **head, int block_number){
	struct Node *newBlock = (struct Node *)malloc(sizeof(struct Node));
	newBlock->block_number = block_number;
	newBlock->next = NULL;
	if (*head == NULL) *head = newBlock;
	else{
		struct Node *temp = *head;
		while (temp->next != NULL){
			temp = temp->next;
		}
		temp->next = newBlock;
	}
	printf("Block %d added.\n", block_number);
}

void removeBlock(struct Node **head, int block_number){
	if (*head == NULL){
		printf("Block %d not found. Removal failed.\n", block_number);
		return;
	}
	struct Node *current = *head;
	struct Node *previous = NULL;
	while (current != NULL){
		if (current->block_number == block_number){
			if (previous == NULL) *head = current->next;
			else previous->next = current->next;
			free(current);
			printf("Block %d removed.\n", block_number);
			return;
		}
		previous = current;
		current = current->next;
	}
	printf("Block %d not found. Removal failed.\n", block_number);
    printf("Student's Name: Manish Shiwakoti\nSymbol No.: 26448/077\nLab Report No.: 09");
    return 0;
}

void display(struct Node *head){
	printf("Linked List Contents: ");
	struct Node *temp = head;
	while (temp != NULL)
	{
		printf("%d ", temp->block_number);
		temp = temp->next;
	}
	printf("\n");
}

void freeList(struct Node **head){
	struct Node *temp = *head;
	while (temp != NULL){
		struct Node *current = temp;
		temp = temp->next;
		free(current);
	}
	*head = NULL;
	printf("Memory freed.\n");
}

int main(){
	struct Node *head = NULL;
	addBlock(&head, 1);
	addBlock(&head, 2);
	display(head);
	removeBlock(&head, 2);
	display(head);
	freeList(&head);
	return 0;
}
