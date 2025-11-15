#include <stdio.h>
#define SIZE 5

// const int SIZE = 5 ;

int arr[SIZE];

int ram; // global variable -> EXTERN -> default value -> 0

void insertData(int location, int data)
{ // 1
    int index = location - 1;
    int i;
    if (arr[index] == 0)
    { // empty
        arr[index] = data;
    }
    else
    {
        // index -> present

        for (i = SIZE - 1; i != index; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[index] = data;
    }
}

void display()
{
    int i;
    printf("\nElements in the Array : ");
    for (i = 0; i < SIZE; i++)
    {
        printf(" %d", arr[i]);
    }
}

int main()
{

    int shaym; // local variable --> auto -> G.V

    display(); // 0 0 0 0 0
    insertData(1, 100);
    insertData(3, 300);
    insertData(2, 200);
    display(); // 100 200 300 0 0
    insertData(1,1000);
    display();//1000 100 200 300 0 
    return 0;
}