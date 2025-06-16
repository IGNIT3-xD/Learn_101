#include <stdio.h>
int main()
{
    int n;

    printf("Row : ");
    scanf("%d", &n);

    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            printf("* ");
        }

        printf("\n");
    }

    // Numbers
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            printf("%d ", col);
        }

        printf("\n");
    }

    // Floyd Triangle
    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", a);
            a++;
        }

        printf("\n");
    }

    return 0;
}