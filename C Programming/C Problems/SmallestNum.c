#include <stdio.h>
int main()
{
    int num1, num2, small;
    printf("Enter two numbers : ");
    scanf("%d %d", &num1, &num2);

    small = num1 * (num1 <= num2) + num2 * (num2 < num1);
    printf("Smallest number is : %d", small);
    return 0;
}