#include <stdio.h>

int main()
{
    char i = 'i';
    printf("%c\n", i);

    // If you try to store more than a single character, it will only print the last character:
    char name = "Imran";
    printf("%c \n", name);

    // To store multiple characters (or whole words), use strings
    char name[] = "Imran";
    printf("%s", name);
    return 0;
}