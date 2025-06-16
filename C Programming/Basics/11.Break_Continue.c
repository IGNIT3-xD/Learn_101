#include <stdio.h>
int main()
{
    // Break
    int i = 1;
    for (i; i <= 5; i++)
    {
        if (i == 3)
            break;
        printf("%d \n", i);
    }

    // Continue
    for (int i = 1; i < 20; i++)
    {
        if (i == 10) // It skips the value 10
        {
            continue;
        }
        printf("%d \n", i);
    }

    return 0;
}