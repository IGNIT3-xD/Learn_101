#include <stdio.h>
int main()
{
    char ch;
    printf("Enter A Character : ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("%c is Uppercase", ch);
    }

    else if (ch >= 'a' && ch <= 'z')
    {
        printf("%c is Lowercase", ch);
    }
    else
    {
        printf("Invalid Character");
    }
    return 0;
}