#include <stdio.h>
int main()
{
    int num, fact = 1;

    printf("Enter a number you want Factorial : ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
        // printf("%d \n", i);
    }
    printf("Factorial of %d is %d", num, fact);

    return 0;
}