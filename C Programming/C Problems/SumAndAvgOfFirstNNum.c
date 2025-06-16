#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter a number : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("Sum of first n no. is %d \n", sum);

    float avg = sum/n;
    printf("Avg is : %.2f", avg);

    return 0;
}