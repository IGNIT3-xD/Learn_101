#include <stdio.h>
int main()
{
    int num;

    do
    {
        printf("Enter A Number : ");
        scanf("%d", &num);
        printf("%d \n", num);

        if (num % 2 != 0)
        {
            break;
        }

    } while (1); // 1 means True, if the input num NOT divisible by 2 then It's a ODD num and the programme will end

    printf("%d is a ODD number", num);

    // Keep taking numbers as input until user entered a num which is divisible by 7
    int num2;
    do
    {
        printf("Enter a number : ");
        scanf("%d", &num2);
        printf("%d \n", num2);

        if (num2 % 7 == 0)
        {
            break;
        }
    } while (1);

    printf("THE END, %d is divisible by 7", num2);

    return 0;
}