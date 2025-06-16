#include <stdio.h>
int main()
{
    char ch;
    printf("Enter character : ");
    scanf("%c", &ch);

    if (ch >= 'a' || ch <= 'z')
    {
        for (char i = 'a'; i <= ch; i++)
        {
            printf("%c \n", i);
        }
    }

    if (ch >= 'A' || ch <= 'Z')
    {
        for (char i = 'A'; i <= ch; i++)
        {
            printf("%c \n", i);
        }
    }

    return 0;
}