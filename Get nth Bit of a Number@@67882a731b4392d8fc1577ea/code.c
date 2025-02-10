#include <stdio.h>
int main() {
    int num, n;
    scanf("%d", &num);
    scanf("%d", &n);
    int bit = getNthBit(num, n);
    printf("The %dth bit of %d is: %d\n", n, num, bit);
    return 0;
}