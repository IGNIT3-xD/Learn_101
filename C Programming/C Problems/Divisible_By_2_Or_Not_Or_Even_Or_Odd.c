#include <stdio.h>
int main()
{

    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    printf("%d", num %2 == 0);          // 1 = Even or divisible by 2, 0 = Odd or not divisible by 2

    return 0;
}