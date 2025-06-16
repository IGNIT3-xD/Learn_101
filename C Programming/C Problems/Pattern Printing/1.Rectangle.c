#include <stdio.h>
int main()
{
    int num;

    printf("Enter a number : ");
    scanf("%d", &num);

    for (int i = 1; i <= 4; i++) // Print the * in nested loop 4 times, In short : Outer loop = No. of lines.
    {
        for (int j = 1; j <= num; j++)
        {
            printf("* "); // ******.... upto n, In short : Inner loop = print things in each line.
        }
        printf(" \n");
    }

    // Numbers Rectangle
    for (int row = 1; row <= 5; row++) // No. of lines = Rows
    {
        for (int col = 1; col <= 7; col++) // No. of things in each line = Column
        {
            printf("%d ", col);
        }
        printf("\n");
    }

    // Another one
    int n, m;

    printf("Row : ");
    scanf("%d", &n);
    printf("Col : ");
    scanf("%d", &m);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}