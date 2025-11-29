#include <stdio.h>
#define SIZE 5

int q[SIZE];
int f = -1;
int r = -1; //-1 EMPTY

void enQueue(int num)
{

    if (r == SIZE - 1)
    {
        printf("\nQueue Overflow");
        return;
    }

    r++;
    q[r] = num;
    printf("\n%d inserted", num);
    if (f == -1)
        f = 0;
}

void deQueue()
{

    if(f == -1){
        printf("\nQ is Empty");
        return; 
    }
    printf("\n %d removed", q[f]);

    if (f == r)
    {
        f = -1;
        r = -1;
    }
    else
    {
        f++;
    }
}

void display()
{
    int i;
    printf("\nElements in the Queue : ");
    for (i = f; i <= r; i++)
    {
        printf(" %d", q[i]);
    }
}

int main()
{
    enQueue(10);
    enQueue(20);
    enQueue(30);

    display();

    deQueue(); // 10
    deQueue(); // 20
    deQueue(); // 30
    deQueue(); // EMPTY

    return 0;
}