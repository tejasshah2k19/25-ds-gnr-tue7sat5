#include <stdlib.h>
#include <stdio.h>

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
int main()
{

    addEmployee();
    addEmployee();
    addEmployee();
    addEmployee();
    addEmployee();
    addEmployee();
    addEmployee();

    
    display();
    return 0;
}