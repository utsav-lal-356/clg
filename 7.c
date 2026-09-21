#include <stdio.h>

int main()
{
    int a, b,sum,sub,div,mod,mul;

    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);

    sum = a + b;
    sub = a - b;
    mul = a * b;
    div = a / b;
    mod = a % b;

    printf("Addition = %d\n", sum);
    printf("Subtraction = %d\n", sub);
    printf("Multiplication = %d\n", mul);
    printf("Division = %d\n", div);
    printf("Modulo = %d\n", mod);

    return 0;
}


