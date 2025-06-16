#include <stdio.h>
int main()
{
    int n;

    printf("Row : ");
    scanf("%d", &n);

    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n + 1 - row; col++)
        {
            /*
            If row = 1 then col = 4, So on row = 2 then col = 3, row 3 then col = 2....
            It's look like sum of (row + col) is always 5.
            So, The equation becomes : row + col = 5 (here input n = 4 )
            If we generalize the eq. : row + col = n + 1
                                     : col = n + 1 - row
            */
            printf("* ");
        }

        printf("\n");
    }

    // Or use extra variable
    int a = n;
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= a; col++)
        {
            printf("* ");
        }
        a--;
        printf("\n");
    }

    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 4 + 1 - i; j++)
        {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}