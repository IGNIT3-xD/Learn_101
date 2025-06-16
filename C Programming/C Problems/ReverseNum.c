#include <stdio.h>
int main()
{
    int n, reverseNum = 0, remainder;

    printf("Enter a number : ");
    scanf("%d", &n);

    while (n != 0)
    {
        remainder = n % 10;
        reverseNum = reverseNum * 10 + remainder;
        n = n / 10;
    }

    printf("The reverse number is : %d\n", reverseNum);

    return 0;
}