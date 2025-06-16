#include <stdio.h>
int main()
{
    int a, b, temp;
    printf("Enter a : ");
    scanf("%d", &a);

    printf("Enter b : ");
    scanf("%d", &b);

    printf("%d %d \n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("%d %d", a, b);

    // Swap without third variable
    // a = a + b;  // a = 5* + 3* = 8
    // b = a - b;  // b = 8 - 3 = 5*
    // a = a - b;  // a = 8 - = 3*

    // printf("%d %d", a, b);

    return 0;
}