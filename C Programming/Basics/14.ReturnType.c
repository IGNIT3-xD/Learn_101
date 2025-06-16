#include <stdio.h>

// Void doesn't return a value. To return a value use (int, float)
int sum(int a, int b)
{
    return a + b;
}

int main()
{
    printf("Sum is %d ", sum(5, 10));
    return 0;
}