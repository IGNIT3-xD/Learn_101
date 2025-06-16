#include <stdio.h>
int main()
{
    char g;

    printf("Enter your Letter Grade : ");
    scanf("%s", &g);

    switch (g)
    {
    case 'A':
        printf("You got 70-100");
        break;
    case 'B':
        printf("You got 50-69");
        break;
    case 'C':
        printf("You got 40-49");
        break;
    case 'D':
        printf("You got 33-39");
        break;
    case 'F':
        printf("You got 0-32");
        break;
    default:
        printf("Error");
    }

    return 0;
}