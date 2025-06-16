#include <stdio.h>
int main()
{
    int marks;
    printf("Enter your marks : ");
    scanf("%d", &marks);

    if (marks <= 100 && marks >= 80)
    {
        printf("You got A+ \n");
    }
    else if (marks <= 79 && marks >= 70)
    {
        printf("You got A \n");
    }
    else if (marks <= 69 && marks >= 60)
    {
        printf("You got A- \n");
    }
    else if (marks <= 59 && marks >= 50)
    {
        printf("You got B \n");
    }
    else if (marks <= 49 && marks >= 40)
    {
        printf("You got C \n");
    }
    else if (marks <= 39 && marks >= 33)
    {
        printf("You got D \n");
    }
    else if (marks <= 32 && marks >= 0)
    {
        printf("You got F, Try again !!! \n");
    }
    else
    {
        printf("Invalid number");
    }
    return 0;
}