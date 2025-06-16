#include <stdio.h>

void sum(int x, int y)
{
    printf("Sum is %d \n", x + y);
    // return;
    printf("Hello this is Sum Function \n");

    return; // This means the function will end here.
}

void myFunction(char name[], int age)
{
    printf("Hi %s, Your age is %d \n", name, age);
    return;
}

int usrInput(int q, int w); 

int main()
{
    sum(10, 5);
    myFunction("Imran", 23);
    myFunction("Liam", 24);

    // Here a,b and q, w are different variables
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    usrInput(a, b);

    return 0;
}

int usrInput(int q, int w)
{
    printf("You Entered %d and %d \n", q, w);
    return 0;
}