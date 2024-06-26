#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define SIZE 80
struct queue
{
  int items[SIZE];
  int front;
  int rear;
};

struct queue* createQueue();
void enqueue(struct queue* q, int);     //for inserting an element into the queue
int dequeue(struct queue* q);       //for deleting an element from the queue
void display(struct queue* q);      //for displaying elements present in the queue
int isEmpty(struct queue* q);       //to check whether the queue is empty or not...
void printQueue(struct queue* q);

struct node
{
  int vertex;
  struct node* next;
};

struct node* createNode(int);
struct Graph {
  int numVertices;
  struct node** adjLists;
  int* visited;
};

// BFS algorithm
int bfs(struct Graph* graph, int startVertex, int search)
{
  struct queue* q = createQueue();
  graph->visited[startVertex] = 1;
  enqueue(q, startVertex);
  while (!isEmpty(q))
  {
    printQueue(q);
    int currentVertex = dequeue(q);
    if(search==currentVertex){
        printf("\n Search Found: %d\n", currentVertex);
        exit(1);
    }
    struct node* temp = graph->adjLists[currentVertex];
    while (temp) {
      int adjVertex = temp->vertex;
      if (graph->visited[adjVertex] == 0) {
        graph->visited[adjVertex] = 1;
        enqueue(q, adjVertex);
      }
      temp = temp->next;
    }
  }
  return 0;
}

// Creating a node
struct node* createNode(int v) {
  struct node* newNode = malloc(sizeof(struct node));
  newNode->vertex = v;
  newNode->next = NULL;
  return newNode;
}

// Creating a graph
// params no of vertices

struct Graph* createGraph(int vertices) {
  struct Graph* graph = malloc(sizeof(struct Graph));
  graph->numVertices = vertices;
  graph->adjLists = malloc(vertices * sizeof(struct node*));  graph->visited = malloc(vertices * sizeof(int));
int i;
  // initalise all node with NULL value
  for (i = 0; i < vertices; i++) {
    graph->adjLists[i] = NULL;
    graph->visited[i] = 0;
  }
  return graph;
}

// Add edge
void addEdge(struct Graph* graph, int src, int dest) {
  // Add edge from src to dest
  struct node* newNode = createNode(dest);
  newNode->next = graph->adjLists[src];
  graph->adjLists[src] = newNode;
  // Add edge from dest to src
  newNode = createNode(src);
  newNode->next = graph->adjLists[dest];
  graph->adjLists[dest] = newNode;
}

// Create a queue
struct queue* createQueue() {
  struct queue* q = malloc(sizeof(struct queue));
  q->front = -1;
  q->rear = -1;
  return q;
}

// Check if the queue is empty
int isEmpty(struct queue* q) {
  if (q->rear == -1)
    return 1;
  else
    return 0;
}

// Adding elements into queue
void enqueue(struct queue* q, int value) {
  if (q->rear == SIZE - 1)
    printf("\nQueue is Full!!");
  else {
    if (q->front == -1)
      q->front = 0;
    q->rear++;
    q->items[q->rear] = value;
  }
}

// Removing elements from queue
int dequeue(struct queue* q) {
  int item;
  if (isEmpty(q)) {
    printf("Queue is empty");
    item = -1;
  } else {
    item = q->items[q->front];
    q->front++;
    if (q->front > q->rear) {
      printf("Resetting queue ");
      q->front = q->rear = -1;
    }
  }
  return item;
}

// Print the queue
void printQueue(struct queue* q) {
  int i = q->front;
  if (isEmpty(q)) {
    printf("Queue is empty");
  } else {
    printf("\nQueue contains: ");
    for (i = q->front; i < q->rear + 1; i++) {
      printf("%d ", q->items[i]);
    }
  }
}

int main() {
    int choice=1, root, child, count, search;
    printf("Enter the number of nodes in graph/tree : ");
    scanf("%d", &count);
    struct Graph* graph = createGraph(count);
    do{
        printf("Enter 1 to add and 0 to exit:");
        scanf("%d", &choice);
        if(choice==1){
            printf("Enter source node: ");
            scanf("%d", &root);
            printf("Enter child node value: ");
            scanf("%d", &child);
            addEdge(graph, root, child);
        }
    }while(choice==1);
  printf("Enter a value to search:");
  scanf("%d", &search);
  if(bfs(graph, 0, search)==0){
    printf("Search not found \n");
  }
  return 0;
}