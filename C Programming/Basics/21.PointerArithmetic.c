#include <stdio.h>
int main()
{
    char star = '*';
    char *ptr = &star;

    printf("%p\n", ptr);

    *ptr++;
    printf("%p\n", ptr);

    *ptr--;
    printf("%p\n", ptr);

    return 0;
}