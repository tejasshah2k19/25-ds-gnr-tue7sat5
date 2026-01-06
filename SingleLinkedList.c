#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;//variable 
    struct node *next;//self referentials structure 
}*head=NULL;

int main()
{
     struct node *tmp; //member 

    head = malloc(sizeof(struct node));    
    head->data = 10 ;
    head->next = NULL; 

    tmp = malloc(sizeof(struct node));
    tmp->data = 20 ;
    tmp->next=NULL;
    head->next = tmp ;

    printf(" %d %d %d",head->data,tmp->data,head->next->data);

    return 0;
}