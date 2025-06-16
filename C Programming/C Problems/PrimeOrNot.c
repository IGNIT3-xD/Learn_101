#include <stdio.h>
int main()
{
    int n, isPrime = 1;

    printf("Enter a number : ");
    scanf("%d", &n);

    if (n < 2)
    {
        isPrime = 0;    //
    }
    else
    {
        for (int i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
    }

    if(isPrime)
        printf("%d is prime", n);
    else
        printf("%d is not prime", n);

    return 0;
}