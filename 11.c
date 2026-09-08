#include <stdio.h>

int main()
{
    int a = 10, b = 20;

    printf("(a < b) && (a > 5) = %d\n", (a < b) && (a > 5));
    printf("(a > b) || (a > 5) = %d\n", (a > b) || (a > 5));
    printf("!(a < b) = %d\n", !(a < b));

    return 0;
}