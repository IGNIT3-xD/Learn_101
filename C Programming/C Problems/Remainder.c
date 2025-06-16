#include <stdio.h>
#include <math.h>

int main()
{
    int x, y, remainder;
    printf("Enter two numbers : ");
    scanf("%d %d", &x, &y);

    remainder = x % y;
    printf("Remainder is = %d \n", remainder);

    // For Floating numbers
    float a, b, rem;
    printf("Enter two numbers : ");
    scanf("%f %f", &a, &b);

    rem = fmod(a, b);
    printf("Remainder is (in float) = %f", rem);
    return 0;
}