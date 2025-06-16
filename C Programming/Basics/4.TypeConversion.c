#include <stdio.h>

int main()
{

    // Implicit Conversion, which is done automatically by the compiler.
    float num1 = 50; // Here 50 is Int number.
    printf("%f \n", num1);

    int num2 = 9.99;
    printf("%d \n", num2);

    // Explict Conversion, which is done manually by placing the type in parentheses () in front of the value
    int x = 5, y = 2;
    float div = x / y;
    printf("%f \n", div); // Out put is 2.0000 because 5 and 2 it's a int

    div = (float)x / y; // Here we converted 5 and 2 into float. So, the output is now 2.50000
    printf("%f", div);
    return 0;
}