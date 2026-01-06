#include<stdio.h>
#include<stdlib.h> 


struct student{
    int age;// 4 byte 
    char name[20];//20 byte
};

int main(){

    int *p;
    int *arr; 

    struct student *s; 
    s = malloc(sizeof(struct student));


    p = malloc(sizeof(int)); // 4 byte 
    arr = calloc(5,sizeof(int)); 
    s = 

    printf("Enter value");
    scanf("%d",&p);
    printf(" %d ",p);
    
    //s.age 
    //s->age 
    
    printf("Enter name and age");
    scanf("%s%d",&s->name,&s->age); 

    //scan 

    //print 

    free(p);
    free(arr); 

    return 0; 
}