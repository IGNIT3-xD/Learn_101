#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100];
    int vow = 0, cons = 0;

    printf("Enter string : ");
    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0'; i++) 
    {
        char ch = tolower(str[i]);

        if((ch >= 'a' && ch <= 'z')) 
        {
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                printf("%c - v\n", str[i]);
                vow++;
            }
            else
            {
                printf("%c - c\n", str[i]);
                cons++;
            }
        }
    }
    
    printf("Vowels : %d, Consonant : %d", vow, cons);

    return 0;
}