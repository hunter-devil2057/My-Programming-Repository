#include <stdio.h>
#include<conio.h>
#include <stdlib.h>

struct node {
  char vertex;
  int cost;
  struct node* next[2];
};

struct node* createNode(char v, int cost) {
  struct node* newNode = malloc(sizeof(struct node));
  newNode->vertex = v;
  newNode->cost = cost;
  newNode->next[0] = NULL;
  newNode->next[1] = NULL;
  return newNode;
}

int cost = 0;
int heuristic(char n){
  int h;
  switch (n)
  {
  case 'A':
    h=0;
    break;
  case 'B':
    h=4;
    break;
  case 'C':
    h=2;
    break;
  case 'D':
    h=0;
    break;
   case 'E':
    h=11;
    break;
  default:
    break;
  }
  return h;
}

void search(struct node* head, int destination){
  cost+=head->cost;
  printf("%c -> ",head->vertex);
  if(head!=NULL && head->vertex==destination){
    printf("Match Found\nTotal Cost: %d",cost);
  }
  if(head->next[0]!=NULL && head->next[1]!=NULL){
   if((heuristic(head->next[0]->vertex)+(cost+head->next[0]->cost))<(heuristic(head->next[1]->vertex)+(cost+head->next[1]->cost))){
      search(head->next[0],destination);
   }
   if((heuristic(head->next[0]->vertex)+(cost+head->next[0]->cost))>(heuristic(head->next[1]->vertex)+(cost+head->next[1]->cost))){
      search(head->next[1],destination);
   }
  }
  if(head->next[0]==NULL && head->next[1]!=NULL){
    search(head->next[1],destination);
  }
  if(head->next[1]==NULL && head->next[0]!=NULL){
    search(head->next[0],destination);
  }
}

int main() {
  struct node* root;
  char value;
  int cost,choice;
  root=createNode('A',0);
  root->next[0] = createNode('B',2);
  root->next[1] = createNode('C',5);
  root->next[1]->next[0] = createNode('D',4);
  root->next[1]->next[1] = createNode('E',5);
  root->next[0]->next[0] = createNode('D',5);
  printf("Source: A\nGoal: D\nFinding Path.....\n\n");
  search(root,'D');
  return 0;
}