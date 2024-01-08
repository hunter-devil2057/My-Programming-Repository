#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

#define MAX_VERTICES 100

int graph[MAX_VERTICES][MAX_VERTICES];

bool included[MAX_VERTICES];

// Function to find Vertex Cover using the APPROX-VERTEX_COVER algorithm
void approxVertexCover(int vertices, int edges)
{
    bool edgesRemaining[MAX_VERTICES][MAX_VERTICES];
    for (int i = 0; i < vertices; i++)
    {
        for (int j = 0; j < vertices; j++)
        {
            edgesRemaining[i][j] = graph[i][j];
        }
    }
    while (edges > 0)
    {
        int u, v;
        for (int i = 0; i < vertices; i++)
        {
            for (int j = 0; j < vertices; j++)
            {
                if (edgesRemaining[i][j])
                {
                    u = i;
                    v = j;
                    break;
                }
            }
        }
        included[u] = included[v] = true;
        for (int i = 0; i < vertices; i++)
        {
            edgesRemaining[u][i] = edgesRemaining[i][u] = false;
            edgesRemaining[v][i] = edgesRemaining[i][v] = false;
        }
        edges--;
    }
}
int main()
{
    int vertices = 8, edges = 10;
    int edgesData[10][2] = {{1, 6}, {1, 2}, {1, 4}, {2, 3}, {2, 4},
                            {6, 7}, {4, 7}, {7, 8}, {3, 5}, {8, 5}};
    for (int i = 0; i < edges; i++)
    {
        int u = edgesData[i][0];
        int v = edgesData[i][1];
        graph[u][v] = graph[v][u] = 1;
    }
    approxVertexCover(vertices, edges);
    printf("Vertex Cover: ");
    for (int i = 1; i <= vertices; i++)
    {
        if (included[i])
        {
            printf("%d ", i);
        }
    }
	printf("\nName: Manish Shiwakoti\nT.U. Symbol No.: 26448/077");
    return 0;
}