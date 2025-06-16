#include <stdio.h>
int main()
{
    // if (/* condition */)
    // {
    //     /* code to be executed if condition1 is true */
    // }
    // else if (/* condition */)
    // {
    //     /* code to be executed if condition1 is false and condition2 is true*/
    // }
    // else
    // {
    //     /* code to be executed if both conditions are false*/
    // }

    int x, y;
    printf("Enter x and y: ");
    scanf("%d %d", &x, &y);

    if (x > y)
    {
        printf("%d X is bigger", x);
    }
    else if (y > x)
    {
        printf("%d Y is bigger", y);
    }
    else
    {
        printf("Invalid number");
    }

    //Ternary Operators
    //(Condition) ? do somethings if true : do something if false;
    int a = 19;
    (a >= 10) ? printf("\n%d is Bigger",a) : printf("10 is Bigger");

    
    return 0;
}