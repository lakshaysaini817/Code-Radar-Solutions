#include <stdio.h>
int main() {
    int a,b;
    scanf("%d",&a);
    b=a<<(sizeof(int)*8-1)& 1;
    if(b){
        printf("Set");
    }else(printf("Not Set"))
    return 0;
}