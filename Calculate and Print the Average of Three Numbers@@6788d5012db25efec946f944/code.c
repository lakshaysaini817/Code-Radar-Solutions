#include <stdio.h>
int main() {
    int a,b,c;
    float Average;
    scanf("%d %d %d",&a,&b,&c);
    Average = (a + b + c) / 3.00;
    printf("Average: %.2f\n",Average);
    return 0;
}