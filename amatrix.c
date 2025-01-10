#include <stdio.h>
#define max 5
int main(){
    char vertices[]={'A','B','C','D'};
    int size=sizeof(vertices)/sizeof(vertices[0]);
    char graph[max][max]={0};
    graph [0][1]=1;
    graph [0][2]=1;
    graph [1][3]=1;
    graph [1][2]=1;
    graph [2][3]=1;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
           printf("%d ",graph[i][j]);
        }
        printf("\n");
        
    }
    
}