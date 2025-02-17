#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    b=(a>>b)&1;
    printf("%d",b);
    return 0;
}
 