#include <stdio.h>
#include <string.h>
int main()
{
    char name[40];

    printf("Enter your name : ");
    scanf("%s", &name);

    printf("Good morning %s", name);

    // Scanf can't input multi word strings with space. So use fgets() and puts()
    char fname[100];

    printf("Enter your full name : ");
    fgets(fname, 100, stdin);
    puts(fname);

    // String length
    char alphabet[] = "ABCDEF";
    printf("%d\n", strlen(alphabet)); // strlen and sizeof are not same. Doesn't count \0
    printf("%d\n", sizeof(alphabet)); // sizeof includes \0 while counting

    // Concatenate Strings - combine two strings
    char str1[] = "Hello ";
    char str2[] = "World";

    strcat(str1, str2); // Concatenate str2 to str1 (result is stored in str1)

    printf("%s\n", str1);

    // Copy strings
    char strA[50] = "Hala Madrid";
    char strB[40] = "Visca Barca";

    strcpy(strA, strB); // Copy strB to strA

    printf("%s\n", strA);

    // Compare Strings
    char strX[] = "Hello";
    char strY[] = "Hi";
    char strZ[] = "Hello";

    // Compare string x, y and z
    printf("%d\n", strcmp(strX, strY)); // Not Returns 0, Cause string X and U are not equal 
    printf("%d\n", strcmp(strX, strZ)); // Returns 0, Cause string X and Z are equal

    return 0;
}