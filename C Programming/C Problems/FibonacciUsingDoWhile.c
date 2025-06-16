#include <stdio.h>
int main()
{
    int n, t1 = 0, t2 = 1, nextTerm;

    printf("Enter a number : ");
    scanf("%d", &n);

    printf("Factorial of %d is : %d %d", n, t1, t2);

    // Using While
    int i = 3;
    /*while (i <= n)
    {
        nextTerm = t1 + t2;
        printf(" %d", nextTerm);

        t1 = t2;
        t2 = nextTerm;

        i++;
    }*/

    // Using Do-While
    do
    {
        nextTerm = t1 + t2;
        printf(" %d", nextTerm);

        t1 = t2;
        t2 = nextTerm;

        i++;
    }
    while(i <= n);

    return 0;
}