#include <stdio.h>

struct edge
{
    int source;
    int dest;
};

int main()
{

    int i; 
    int totalEdges; 
    struct edge e[10]; // source dest
    
    printf("\nHow many Edges you have");
    scanf("%d",&totalEdges); 
    totalEdges = totalEdges * 2; 

    for(i=0;i<totalEdges;i++){
        printf("Enter Source and Dest");
        scanf("%d%d",&e[i].source,&e[i].dest);    
        i++;
        e[i].source = e[i-1].dest; 
        e[i].dest = e[i-1].source; 
    }

    printf("\nEdges : ");
    printf("\nSource   Destination ");
    for(i=0;i<totalEdges;i++){
        printf("\n%d  %d",e[i].source,e[i].dest);
    }

    return 0;
}