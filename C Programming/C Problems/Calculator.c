#include <stdio.h>

int main()
{
    float num1, num2, sum, sub, mult, div, avg;

    printf("Enter First Number : ");
    scanf("%f", &num1);
    printf("Enter Second Number : ");
    scanf("%f", &num2);

    sum = num1 + num2;
    printf("Sum is = %.2f \n", sum);
    // or
    // printf("Sum is = %.2f", num1 + num2);

    sub = num1 - num2;
    printf("Subtract is = %.2f \n", sub);

    mult = num1 * num2;
    printf("Multiplication is = %.3f \n", mult);

    div = num1 / num2;
    printf("Division is = %.3f \n", div);

    avg = sum / 2;
    printf("Avarage is = %.3f \n", avg);

    int rem = (int)num1 % (int)num2; // In Remainder float value doesn't work. So, we type casting it
    printf("Remainder is = %d", rem);
    return 0;
}