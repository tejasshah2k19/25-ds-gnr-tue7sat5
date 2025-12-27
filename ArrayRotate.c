#include <stdio.h>
#define SIZE 5

int a[] = {10, 20, 30, 40, 50};

void rotate(int count)
{
    int i;
    int x;

    for (x = 1; x <= count; x++)
    {
        int tmp = a[0];

        for (i = 0; i < SIZE; i++)
        {
            a[i] = a[i + 1];
        }
        a[SIZE - 1] = tmp;
    }
}

void display()
{
    int i;
    printf("\nArray => ");

    for (i = 0; i < SIZE; i++)
    {
        printf(" %d", a[i]);
    }
}
int main()
{

    display();
    rotate(3);
    display();

    return 0;
}
