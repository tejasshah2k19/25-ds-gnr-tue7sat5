#include<stdio.h>



int main(){

    int graph[4][4]; 
    int i,j; 

    for(i=0;i<4;i++){

        for(j=0;j<4;j++){
            printf("\n%d is connected with ?",i);
            printf("\n%d ?\n 1:YES 0:NO ",j);
            scanf("%d",&graph[i][j]);//0 0 :0 
        }
    }

    for(i=0;i<4;i++){
 
        for(j=0;j<4;j++){
            printf("%d",graph[i][j]);//0 0 :0 
        }
        printf("\n"); 
    }

    


    return 0; 
}