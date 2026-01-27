#include <stdlib.h>
#include <stdio.h>

struct employee
{
    char name[20];         // 20
    int salary;            // 4
    struct employee *next; // ??
};
struct employee *head, *last;
struct employee *q;

void addNode()
{
    if (head == NULL)
    {
        head = malloc(sizeof(struct employee));
        printf("Enter name and salary ");
        scanf("%s%d", &head->name, &head->salary);
        head->next = NULL;
        last = head;
    }
    else
    {
        q = malloc(sizeof(struct employee));
        printf("Enter name and salary ");
        scanf("%s%d", &q->name, &q->salary);
        q->next = NULL;
        last->next = q;
        last = q;
    }
}
void display()
{
    struct employee *p;

    p = head;

    while (p != NULL)
    {
        printf("\n %s : %d ", p->name, p->salary);
        p = p->next;
    }
}

void addNodeBeg()
{

    q = malloc(sizeof(struct employee));
    printf("Enter name and salary ");
    scanf("%s%d", &q->name, &q->salary);
    q->next = head;
    head = q;
}

void countTotalNode(){
    //print total node 
}

int main()
{

    addNode();
    addNode();
    addNode();
    addNode();
    addNode();

    display();

    return 0;
}