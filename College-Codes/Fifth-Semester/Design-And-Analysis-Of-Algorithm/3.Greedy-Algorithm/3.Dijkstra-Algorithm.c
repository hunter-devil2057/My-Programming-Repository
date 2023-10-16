#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define MAX_NODES 100
#define INF INT_MAX

int n;
int dist[MAX_NODES];
int prev[MAX_NODES];
int graph[MAX_NODES][MAX_NODES];
int min_distance()
{
    int min_dist = INF, min_index;
    for (int i = 0; i < n; i++)
    {
        if (dist[i] <= min_dist && prev[i] == -1)
        {
            min_dist = dist[i];
            min_index = i;
            }
        }
        return min_index;
    }
    void dijkstra(int src)
    {
        for (int i = 0; i < n; i++)
        {
            dist[i] = INF;
            prev[i] = -1;
        }
        dist[src] = 0;
        for (int count = 0; count < n-1; count++)
        {
            int u = min_distance();
            prev[u] = 1;
            for (int v = 0; v < n; v++)
            {
                if (prev[v] == -1 && graph[u][v] && dist[u] != INF && dist[u]+graph[u][v] < dist[v])
                {
                    dist[v] = dist[u] + graph[u][v];
                    prev[v] = u;
                }
            }
        }
    }
int main()
{
    printf("Enter number of nodes: ");
     scanf("%d", &n);
     printf("Enter the adjacency matrix:\n");
     for (int i = 0; i < n; i++)
     {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &graph[i][j]);
        }
    }
    int src;
    printf("Enter the source node: ");
    scanf("%d", &src);
    dijkstra(src);
    printf("Shortest distances from node %d:\n", src);
    for (int i = 0; i < n; i++)
    {
        printf("%d -> %d: %d\n", src, i, dist[i]);
    }
    printf("\nStudent's Name: Manish Shiwakoti\nT.U. Symbol No.: 26448/077");
    return 0;
}