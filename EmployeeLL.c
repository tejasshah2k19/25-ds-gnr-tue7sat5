#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct Employee
{
    char name[30];
    int salary;
    struct Employee *next;
} *first = NULL, *last;

void addEmployee()
{
    struct Employee *tmp;

    if (first == NULL)
    {
        first = malloc(sizeof(struct Employee));

        printf("Enter name and salary");
        scanf("%s%d", &first->name, &first->salary);
        first->next = NULL;
        last = first;
    }
    else
    {
        tmp = malloc(sizeof(struct Employee));
        printf("Enter name and salary");
        scanf("%s%d", &tmp->name, &tmp->salary);
        tmp->next = NULL;
        last->next = tmp;
        last = tmp;
    }
}

void display()
{

    struct Employee *tmp = first;

    while (tmp != NULL)
    {
        printf(" %s %d ", tmp->name, tmp->salary);
        tmp = tmp->next;
    }
}

void addEmployeeBeg()
{

    struct Employee *tmp;
    tmp = malloc(sizeof(struct Employee));
    printf("Enter name and salary");
    scanf("%s%d", &tmp->name, &tmp->salary);
    tmp->next = first;
    first = tmp;
}

void addEmployeeAny()
{
    char name[30];
    struct Employee *p = first;
    struct Employee *tmp, *q;
    int found = 0;

    printf("\nEnter Old Employee name?");
    scanf("%s", &name); // g

    while (p != NULL)
    {
        if (strcmp(p->name, name) == 0)
        {
            found = 1;
            break;
        }
        p = p->next;
    }

    if (found == 1)
    {
        tmp = malloc(sizeof(struct Employee));
        printf("Enter name and salary");
        scanf("%s%d", &tmp->name, &tmp->salary);
        q = p->next;
        tmp->next = q;
        p->next = tmp;
    }
    else
    {
        printf("%s Not Found", name);
    }
}

void delBeg(){

}
int main()
{

    addEmployee(); // x
    addEmployee(); // y
    addEmployee(); // z
    addEmployee(); // p
    display();     //  x y z p
    addEmployeeAny();
    display();
    delBeg();
    display(); // y z p 
    return 0;
}