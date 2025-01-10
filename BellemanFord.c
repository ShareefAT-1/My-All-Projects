#include <stdio.h>
#include <limits.h>
#define V 5
#define E 8
struct Edge
{
    int source, destination, weight;
};

void bellmanFord(struct Edge edges[], int source)
{
    int distance[V];
    for (int i = 0; i < V; i++)
    {
        distance[i] = INT_MAX;
    }
    distance[source] = 0;

    for (int i = 0; i < V - 1; i++)
    {
        for (int j = 0; j < E; j++)
        {
            int u = edges[j].source;
            int v = edges[j].destination;
            int weight = edges[j].weight;

            printf("%d - %d : %d \n", u, v, weight);

            if (distance[u] != INT_MAX && distance[u] + weight < distance[v])
            {
                distance[v] = distance[u] + weight;
            }
        }
    }

    for (int j = 0; j < E; j++)
    {
        int u = edges[j].source;
        int v = edges[j].destination;
        int weight = edges[j].weight;

        if (distance[u] != INT_MAX && distance[u] + weight < distance[v])
        {
            printf("Graph contains a negative-weight cycle\n");
            return;
        }
    }

    printf("Vertex   Distance from Source\n");
    for (int i = 0; i < V; i++)
    {
        printf("%d \t\t %d\n", i, distance[i]);
    }
}

int main()
{
    struct Edge edges[E] = {
        {0, 1, 2},
        {0, 2, 2},
        {1, 2, -2},
        {1, 3, 2},
        {1, 4, 6},
        {2, 1, 3},
        {2, 3, 4},
        {3, 4, -5}
    };

    bellmanFord(edges, 0);
    return 0;
}