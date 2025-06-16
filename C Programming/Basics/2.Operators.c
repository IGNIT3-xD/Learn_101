#include <stdio.h>

int main()
{

   // Assignment Operators
    int x = 5;
    // x+=2;
    printf("%d \n", x += 2); // Same as x = x + 2
    printf("%d \n", x -= 1); // Same as x = x - 1
    printf("%d \n", x %= 2); // Same as x = x % 2

   // Comparison Operators
    int a = 10, b = 11;
    printf("%d \n", a == b); // 1 = True, 0 = False
    printf("%d \n", a != b);
    // int c = b > a;
    printf("%d \n", b > a);
    printf("%d \n", a < b);
    printf("%d \n", a >= b);
    printf("%d \n", a <= b);

    // Logical Operators
    printf("%d \n", 10 > 9 && 11 < 7);  // Returns 1 if both statements are true
    printf("%d \n", 5 > 6 || 1 < 2);    // Returns 1 if one statement is true
    printf("%d", !(7 > 6 && 33 < 100)); // Reverse the result, returns 0 if the result is 1

    return 0;
}