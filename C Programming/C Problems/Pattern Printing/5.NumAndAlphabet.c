#include <stdio.h>
int main()
{
    int row;

    printf("Row : ");
    scanf("%d", &row);

    for (int i = 1; i <= row; i++)
    {
        int a = 65;
        for (int j = 1; j <= i; j++)
        {
            char b = (char)a;

            if (i % 2 != 0)
            {
                printf("%d ", j);
            }
            else
            {
                printf("%c ", b);
            }
            a++;
        }

        printf("\n");
    }

    return 0;
}