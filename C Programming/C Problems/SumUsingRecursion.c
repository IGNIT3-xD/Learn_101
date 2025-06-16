#include <stdio.h>

int sumOfN(int n);

int main()
{
    int x;

    printf("Enter a no. : ");
    scanf("%d", &x);
    printf("%d", sumOfN(x));

    return 0;
}

int sumOfN(int n)
{
    if (n == 0)
        return 0;

    return n + sumOfN(n - 1);
}