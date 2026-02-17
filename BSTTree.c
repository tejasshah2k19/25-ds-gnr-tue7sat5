#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

int main()
{
    struct node *root = NULL;
    struct node *tmp = NULL;

    root = malloc(sizeof(struct node)); // data , left , right

    root->data = 50;
    root->left = NULL;
    root->right = NULL;

    tmp = malloc(sizeof(struct node));
    tmp->data = 70;
    tmp->left = NULL;
    tmp->right = NULL;

    root->right = tmp;

    tmp = malloc(sizeof(struct node));
    tmp->data = 40;
    tmp->left = NULL;
    tmp->right = NULL;

    root->left = tmp;


    printf(" %d %d %d ",root->data,root->left->data,root->right->data);

    return 0;
}