#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char str[100];
    int vowel = 0, cons = 0;

    printf("Enter string : ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    for(int i = 0; str[i] != '\0'; i++)
    {
        char ch = tolower(str[i]);

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
          vowel++;
        }

        else
        {
            cons++;
        }
    }

    printf("No. of vowels are : %d\n",vowel);
    printf("No. of consonants are : %d", cons);

    return 0;
}