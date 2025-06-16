#include <stdio.h>
int main()
{
    // Memory Address
    /*int n = 5;

    printf("%d \n", n);  // Outputs the value
    printf("%p \n", &n); // Outputs the memory address of the variable. & = Address

    // Pointer - Its stores the memory address of the variable
    int x = 10;    // Variable declaration
    int *ptr = &x; // Pointer declaration

    printf("%d \n", x);  // Output the value of x
    printf("%p \n", &x); // Output the memory address of x
    printf("%p \n", ptr);   // Output the memory address of x that stores in pointer

    // Dereference
    int y = 7;
    int *ptr2 = &y;

    printf("%d \n", y);
    printf("%p \n", ptr2); // Output the memory address with pointer
    printf("%d", *ptr2);   // Output the value with pointer
    */

    // * for Value; & for address
    int x = 5;
    int *ptr = &x;
    int **pptr = &ptr;

    printf("x = %d, *ptr is = %d, **ptr is = %d \n", x, *ptr, **pptr);
    return 0;
}