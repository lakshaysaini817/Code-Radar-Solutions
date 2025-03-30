#include<stdio.h>
int main(){
    int i,j,N;
    char ch;
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        ch='A';
        for(j=1;j<=i;j++){
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }

}