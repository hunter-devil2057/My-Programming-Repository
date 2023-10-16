#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
#define MAX_CITIES 100
int n; // number of cities
int dist[MAX_CITIES][MAX_CITIES]; // distance between city i and city j
int curr_path[MAX_CITIES]; // current path of cities
bool visited[MAX_CITIES]; // keeps track of whether a city has been visited
int min_cost = INT_MAX; // minimum cost of a path
void copy_path(int path[], int curr_path[])
{
    for (int i = 0; i < n; i++)
    {
        path[i] = curr_path[i];
    }
}
void tsp(int curr_pos, int n, int count, int cost, int path[])
{
    if (count == n && dist[curr_path[n-1]][curr_path[0]] != 0)
    {
        // all cities have been visited
        cost += dist[curr_path[n-1]][curr_path[0]]; // add cost of returning to the starting city
        if (cost < min_cost)
        {
            min_cost = cost;
            copy_path(path, curr_path);
        }
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (visited[i] == false && dist[curr_pos][i])
        {
            curr_path[count] = i;
            visited[i] = true;
            tsp(i, n, count + 1, cost + dist[curr_pos][i], path);
            visited[i] = false;
        }
    }
}
int main()
{
    printf("Enter the number of cities: ");
    scanf("%d", &n);
    printf("Enter the distance matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &dist[i][j]);
        }
    }
    int path[MAX_CITIES];
    for (int i = 0; i < n; i++)
    {
        curr_path[0] = i;
        visited[i] = true;
        tsp(i, n, 1, 0, path);
        visited[i] = false;
    }
    printf("Minimum cost: %d\n", min_cost);
    printf("Optimal path: ");
    for (int i = 0; i < n; i++)
    {
            printf("%d  ", path[i]);
    }
    printf("\n");
    printf("\nStudent's Name: Manish Shiwakoti\nSymbol No.: 26448/077");
    return 0;
}