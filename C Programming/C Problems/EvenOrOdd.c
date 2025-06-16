#include <stdio.h>
int main()
{
    int num;
    printf("Enter a integer number :");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("%d is Even", num);
    }
    else if (num % 2 != 0)
    {
        printf("%d is Odd", num);
    }
    else
    {
        printf("Invalid number");
    }

    return 0;
    
}