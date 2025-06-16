#include <stdio.h>

int main()
{
    int cel, fahr;
    printf("Enter Celsius value : ");
    scanf("%d", &cel);

    fahr = (cel * 9 / 5) + 32;
    printf("Fahrenheit is = %d", fahr);

    return 0;
}
