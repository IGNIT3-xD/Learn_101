#include <stdio.h>
int main()
{
    int mark[] = {88, 90, 33, 45, 76};

    // Access an element of an array
    printf("%d \n", mark[0]);
    printf("%d \n", mark[4]);

    // Change an element of an array
    printf("Array 2 before change = %d \n", mark[2]);

    mark[2] = 100;
    printf("Array 2 after change = %d \n", mark[2]);

    // Use loop for access all array at once
    for (int i = 0; i <= 4; i++)
    {
        printf("%d\n", mark[i]);
    }
    
    return 0;
}