#include <stdio.h>

int main() {
    double a,b,c;
    char op;
    scanf("%d %d %c",&a,&b,&op);
    if(op=='+'){
        c=a+b;
        printf("%d",c);
    }else if(op=='-'){
        c=a-b;
        printf("%d",c);
    }else if(op=='*'){
        c=a*b;
        printf("%d",c);
    }else if(op=='/'){
        c=a/b;
        printf("%d",c);
    }else{
        printf("error");
    }

    return 0;
}
