#include <stdio.h>

int main() {
    char op;
    double num1, num2, result;
    scanf(" %c", &op); 
    scanf("%lf %lf", &num1, &num2);
    switch (op) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2lf\n", result);
            } else {
                printf("error");
            }
            break;
        default:
            printf("error");
    }

    return 0;
}
