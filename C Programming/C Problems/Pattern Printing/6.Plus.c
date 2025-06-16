#include <stdio.h>
int main()
{
    int n;
    printf("Row (Odd): ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            int a = n / 2 + 1;

            if (i == a || j == a)
            {
                printf("*");
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");
    }

    // Blank plus
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n; col++)
        {

            if (col == (n / 2) + 1 || row == (n / 2) + 1)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}