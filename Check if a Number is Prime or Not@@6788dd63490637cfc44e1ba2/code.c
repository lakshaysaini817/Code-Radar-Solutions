#include <stdio.h> 
int main() {
    int a;
    scanf("%d",&a);
    if (n <= 1) {
        isPrime = 0;
    } else {
        for (i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}