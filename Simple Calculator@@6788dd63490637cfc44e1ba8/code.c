#include <stdio.h>

int main() {
    double a,b,c;
    char op;
    scanf("%lf %lf %c",&a,&b,&op);
    if(op=='+'){
        c=a+b;
        printf("%d",c);
    }else if(op=='-'){
        if (b != 0){
        c=a-b;
        printf("%d",c);}
    }else if(op=='*'){
        c=a*b;
        printf("%d",c);
    }else if(op=='/'){
        c=a/b;
        printf("%lf",c);
    }else{
        printf("error");
    }

    return 0;
}
