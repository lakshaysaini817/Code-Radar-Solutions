#include<stdio.h>
int main(){
    int a,b,c,i,j,k,N;
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        for(j=2;j<=N-1;j++){
            printf(" ");
        }for(k=1;k<=N;k++){
            printf("*");
        }printf("*");
    }
}