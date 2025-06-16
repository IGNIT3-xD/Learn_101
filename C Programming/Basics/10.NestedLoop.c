#include <stdio.h>
int main()
{
    int i, j;

    for (i = 1; i <= 5; i++)
    {
        printf("This is Outer value : %d \n", i);

        for (j = 1; j <= 2; j++)
        {
            printf("%d \n", j); // It will execute 5 times. (5 * 2)
        }
    }

    return 0;
}