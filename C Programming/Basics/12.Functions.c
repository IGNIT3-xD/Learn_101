#include <stdio.h>
#include <math.h>

// Create the function
void myFunction()
{
    printf("Hello world \n");
}

void calculator()
{
    int x = 10;
    float y = 25.00;

    printf("Sum is %.2f \n", x + y);
    printf("Sub is %.2f \n", x - y);
    printf("Div is %.2f \n", x / y);
    printf("Mult is %.2f \n", x * y);
    printf("Avg. is %.2f \n", x + y / 2);
    printf("Rem is %.2f \n", fmod(x, y));
}

// Call the function
int main()
{
    myFunction();
    calculator();

    return 0;
}