#include<stdio.h>
int main(){
    int a,b,N,i,j;
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        for(j=N-1;j>=0;j--){
            for(i=1;i<=N;i++){
                printf("*");
            }printf(" ") ; 
        }printf("\n");
    }
}