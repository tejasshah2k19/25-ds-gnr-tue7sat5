#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *root = NULL;
struct node *tmp = NULL;

struct node *addNode(struct node *root, int num) // null,70   70,80  null,80
{
    if (root == NULL)
    {

        root = malloc(sizeof(struct node)); // data , left , right
        root->data = num;
        root->left = NULL;
        root->right = NULL;
        return root;
    }
    else if (num > root->data)
    {
        // right
        root->right = addNode(root->right, num);
    }
    else if (num < root->data)
    {
        // left
        root->left = addNode(root->left, num);
    }

    return root;
}

int main()
{

    root = addNode(root, 70);
    root = addNode(root, 80);
    root = addNode(root, 60);

    printf(" %d %d %d ", root->data, root->left->data, root->right->data); // 70 60 80

    return 0;
}