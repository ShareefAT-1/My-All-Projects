#include <stdio.h>
#include <limits.h>

#define V 5

int FindMinVertex(int key[], int visited[])
{
    int min = INT_MAX;
    int minindex;

    for (int v = 0; v < V; v++)
    {
        if (!visited[v] && key[v] < min)
        {
            min = key[v];
            minindex = v;
        }
    }
    return minindex;
}

void primMst(int graph[V][V])
{
    int parent[V];
    int key[V];
    int visited[V] = {0};

    for (int i = 0; i < V; i++)
    {
        key[i] = INT_MAX;
        parent[i] = -1;
    }
    key[0] = 0;
    parent[0] = -1;

    for (int count = 0; count < V - 1; count++)
    {
        int u = FindMinVertex(key, visited);
        visited[u] = 1;
        for (int v = 0; v < V; v++)
        {
            if (graph[u][v] && !visited[v] && graph[u][v] < key[v])
            {
                key[v] = graph[u][v];
                parent[v] = u;
            }
        }
    }
    printf("Edge \tWeight\n");
    for (int i = 1; i < V; i++)
    {
        printf("%d - %d \t%d\n", parent[i], i, key[i]);
    }
}

int main() {
    int graph[V][V] = {
        {0, -2, 0, -8, 0},
        {2, 0, 3, 8, 5},
        {0, 6, 0, 0, 7},
        {6, 8, 0, 0, 9},
        {0, 5, 7, 9, 0}
    };


    primMst(graph);

}
