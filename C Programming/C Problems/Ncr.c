// nCr = n!/ (r! *(n-r)!)

#include <stdio.h>
int main()
{
    int n, r, nFact = 1, rFact = 1, nrFact = 1;

    printf("Enter n : ");
    scanf("%d", &n);
    printf("Enter r : ");
    scanf("%d", &r);

    // Factorial of n!
    for (int i = 1; i <= n; i++)
    {
        nFact = nFact * i;
    }
    printf("n! is = %d \n", nFact);

    // Factorial of r!
    for (int i = 1; i <= r; i++)
    {
        rFact = rFact * i;
    }
    printf("r! is = %d \n", rFact);

    // Factorial of (n-r)!
    for (int i = 1; i <= n - r; i++)
    {
        nrFact = nrFact * i;
    }
    printf("(n-r)! is = %d \n", nrFact);

    // Calculate nCr
    int ncr = nFact / (rFact * nrFact);
    printf("nCr is : %d", ncr);

    return 0;
}