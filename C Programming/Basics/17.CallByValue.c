#include <stdio.h>

int example(int x)
{
    return x += 5;
}

int main()
{
    int n = 2;

    printf("Before function call n = %d \n", n);

    printf("Inside function n = %d \n", example(n));

    printf("After function call n = %d", n);

    return 0;
}
/*
 A copy of the actual value is passed to the function.
 Changes made inside the function. Do not affect original variable
*/