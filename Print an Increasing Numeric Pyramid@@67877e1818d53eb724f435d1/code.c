#include<stdio.h>
int main(){
    int a, b, N, i, j;
    scanf("%d", &N);
    for(i = 1; i <= N; i++){
        for(j = N - 1; j >= i; j--){  
            printf(" "); 
        }
        for(b = 1; b <= (2 * i - 1); b++){  
            printf("%d ",b);
        }
        printf("\n");  
    }
}
