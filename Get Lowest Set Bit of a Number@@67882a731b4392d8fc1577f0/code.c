#include <stdio.h>

int main() {
    int a, c;
    scanf("%d", &a);
    c = a & -a;
    printf("%d", c);
    return 0;
}