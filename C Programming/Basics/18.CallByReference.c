#include <stdio.h>

int example(int *x)
{
    return *x += 5;
}

int main()
{
    int n = 5;

    printf("Before function call n = %d \n", n);

    printf("Inside function n = %d \n", example(&n));

    printf("After function call n = %d", n);

    return 0;
}
/*
 Instead of passing a copy, we pass the memory address (pointer) of the variable.
 Changes made inside the function reflect in the original variable.
 Use when need to modify the actual value
*/