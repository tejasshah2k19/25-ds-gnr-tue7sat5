#include <stdio.h>
#define SIZE 5

int arr[SIZE];

void scanData(int len)
{
    int i;
    for (i = 0; i < len; i++)
    {
        printf("\nEnter value : ");
        scanf("%d", &arr[i]);
    }
}

void printData(int len)
{
    int i;
    for (i = 0; i < len; i++)
    {
        printf("\n%d", arr[i]);
    }
}

void swap(int x, int y)
{   int tmp; 
    // 0     1   2   3   4
    // 10    20  30  40  50
    x = x - 1; // index = location - 1 ;
    y = y - 1;
    tmp = arr[y];
    arr[y] = arr[x]; 
    arr[x] = tmp; 

}

int main()
{
    scanData(5);
    printData(5);
    swap(1, 5);//location 
    printData(5);

    return 0;
}