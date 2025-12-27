#include <stdio.h>
#define SIZE 5
void display(int a[])
{
    int x;
    printf("\n");
    for (x = 0; x < SIZE; x++)
    {
        printf(" %d", a[x]);
    }
}

void insertionSort(int a[])
{
    int i, j, tmp;
    for (i = 1; i < SIZE; i++)
    {
        printf("\nPass %d", i);
       
        tmp = a[i];
        for (j = i - 1; j >= 0; j--)
        {
            if (a[j] > tmp)
            {
                a[j + 1] = a[j];
            }
            else
            {
                break;
            }
            display(a);
        }
        a[j + 1] = tmp;
        display(a);
    }
}

int main()
{
    int a[] = {12, 3, 56, 2, 19};
    printf("\nArray Before Sorting : ");
    display(a);
    insertionSort(a);

    printf("\nArray After Sorting : ");
    display(a);
    return 0;
}