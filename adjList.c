#include <stdio.h>
#include <stdlib.h>
#define max 5
typedef struct node
{
    int vertex;
    struct node *next;
} node;
typedef struct Graph
{
    node *adjlist[max];
} Graph;
node *createNod(int vertex)
{
    node *newnode = (node *)malloc(sizeof(node));
    newnode->vertex = vertex;
    newnode->next = NULL;
    return newnode;
}
Graph *createGraph(int vertices)
{
    Graph *graph = (Graph *)malloc(sizeof(Graph));
    for (int i = 0; i < max; i++)
    {
        graph->adjlist[i] = NULL;
    }
    return graph;
}
void addEdge(Graph *graph, int src, int des)
{
    node *newnode = createNod(des);
    newnode->next = graph->adjlist[src];
    graph->adjlist[src] = newnode;

    newnode = createNod(src);
    newnode->next = graph->adjlist[des];
    graph->adjlist[des] = newnode;
}
void printGraph(Graph*graph,int vertices){
    for (int i = 0; i < vertices; i++)
    {
        node*temp=graph->adjlist[i];
        printf("%d: ", i);
        while (temp)
        {
           printf("%d -> ", temp->vertex);
           temp=temp->next;
        }
        printf("NULL\n");
        
    }
    
}
int main()
{
    int vertices=5;
    Graph*graph=createGraph (vertices);

    addEdge(graph, 0 , 1);
    addEdge(graph, 0 , 4);
    addEdge(graph, 1 , 2);
    addEdge(graph, 1 , 3);
    addEdge(graph, 1 , 4);
    addEdge(graph, 2 , 3);
    addEdge(graph, 3 , 4);

    printf("Adjency Lists:\n");
    printGraph(graph,vertices);
}