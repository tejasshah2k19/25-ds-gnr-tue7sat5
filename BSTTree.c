#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *addNode(struct node *root, int data) // root:90 , 150
{
    if (root == NULL)
    {
        root = malloc(sizeof(struct node));
        root->data = data;
        root->left = NULL;
        root->right = NULL;
    }
    else
    {
        if (data > root->data)
        {
            // right
            root->right = addNode(root->right, data);
        }
        else if (data < root->data)
        {
            // left
            root->left = addNode(root->left, data);
        }
    }
    return root;
}

void inOrder(struct node *root)
{

    if (root != NULL)
    {
        inOrder(root->left);
        printf(" %d ", root->data);
        inOrder(root->right);
    }
}

void preOrder(struct node *root)
{

    if (root != NULL)
    {
        printf(" %d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(struct node *root)
{

    if (root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf(" %d ", root->data);
    }
}

int main()
{

    struct node *root = NULL;

    // root = addNode(root, 90);
    // root = addNode(root, 50);
    // root = addNode(root, 150);
    // root = addNode(root, 200);
    // printTree(root); // 50 90 150 200

    // // root = addNode(root, 20);
    // // root = addNode(root, 30);
    // // printTree(root); // 20 30 50 90 150 200

    root = addNode(root, 50);
    root = addNode(root, 70);
    root = addNode(root, 30);
    root = addNode(root, 20);
    root = addNode(root, 40);
    root = addNode(root, 55);
    root = addNode(root, 90);

    // tree travesal -->
    // root

    inOrder(root); //

    return 0;
}