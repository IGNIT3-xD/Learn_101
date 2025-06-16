#include <stdio.h>
int main()
{
    int a, b, c;

    printf("Enter three values of triangle : \n");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && a == c)
    {
        printf("Triangle is Equilateral");
    }
    else if (a != b && a != c)
    {
        printf("Triangle is Scalene");
    }
    else
    {
        printf("Triangle is Isoscales");
    }

    return 0;
}