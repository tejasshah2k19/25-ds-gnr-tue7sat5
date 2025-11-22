#include <stdio.h>
#include <stdlib.h>

#define SIZE 5
int stack[SIZE];
int top = -1; // empty

void push(int data)
{
    if (top == SIZE - 1)
    {
        printf("\nStack OVERFLOW");
    }
    else
    {
        top++;
        stack[top] = data;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("\nStack UnderFlow");
    }
    else
    {
        printf("\n%d pop", stack[top]);
        top--;
    }
}
void display()
{
    int i;
    for (i = top; i >= 0; i--)
    {
        printf("\n%d", stack[i]);
    }
}

int main()
{

    // menu
    int choice;
    int num;

    // 0 -> false
    // true
    while (-1) //
    {
        printf("\n0 For Exit\n1 for PUSH\n2 for POP\n3 For Display\nEnter choice");
        scanf("%d", &choice);

        switch (choice)
        {
        case 0:
            exit(0);
        case 0 + 1:
            printf("\nEnter value : ");
            scanf("%d", &num);
            push(num);
            break;
        case 2 * 1:
            pop();
            break;
        case 3:
            display();
            break;

        default:
            printf("\nInvalid Choice PTA");
        }
    }

    return 0;
}
