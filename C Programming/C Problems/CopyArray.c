#include <stdio.h>
int main()
{
    int mainArray[] = {1, 2, 3, 4, 5};
    int size = sizeof(mainArray) / sizeof(mainArray[0]);

    int copyArray[size];

    for (int i = 0; i < size; i++)
    {
        copyArray[i] = mainArray[i];
    }

    for (int i = 0; i < size; i++)
    {
        printf("Copy array's elements are : %d\n", copyArray[i]);
    }

    return 0;
}