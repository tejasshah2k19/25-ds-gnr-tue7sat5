#include <stdio.h>

void add(int num)
{ // 0
    printf("\n%d", num);
    if (num != 0)
        add(num - 1); // recursion
}

void addAgain(int num) // 4
{                      // 0
    if (num != 0)
        addAgain(num - 1); // recursion
    printf("\n%d", num);
}

void addAgainAgain(int num) // 1
{
    printf("\n%d", num); // 1
    if (num != 5)
        addAgainAgain(++num); // recursion
}

void printName(int num)
{
    printf("\nRoyal"); // 1
    if (num != 1)
        printName(num - 1); //
}

int main()
{

    printf("start");
    addAgainAgain(1);
    printf("end");
 
    printName(5);
    return 0;
}
/*
    start
    addAgain(5)=>n:5                     =>  5
        addAgin(4)=>n:4                  =>  4
            addAgain(3)=>n:3             =>  3
                addAgin(2)=>n:2          =>  2
                    addAgain(1)=>n:1     =>  1
                        addAgain(0)=>n:0 =>  0

    End
*/
