#include <stdio.h>

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int main()
{
    int x, y;

    printf("Enter 2 numbers : \n");
    scanf("%d %d", &x, &y);

    printf("GCD is = %d\n", gcd(x, y));
    printf("LCM is = %d", lcm(x, y));

    return 0;
}