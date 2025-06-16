#include <stdio.h> // This is the basic structure of C

int main()
{
    // Print something (Output)
    printf("Hello This is IGNITE. "); // Every C statement ends with a semicolon ;

    // New Line
    printf("This is first line \n");
    printf("This is new line \n");

    // Variables and Data types
    int age = 50;
    // or
    /*int Age;
    Age = 55; */
    float pi = 3.14; // Here (int float char...) are the Data types and (age pi letter) are Variables
    char letter = 'I';

    // Declaration of Variables
    printf("%d \n", age);
    printf("%f \n", pi); // (%d %f %c) are the Format Specifiers
    printf("%c \n", letter);

    // Multiple Variables
    int x = 5, y = 6, z = 7;
    printf("%d %d %d \n", x, y, z);

    // You can also assign the same value to multiple variables of the same type
    float _x, _y, _z;
    _x = _y = _z = 10;
    printf("%.2f", _x + _y + _z);

    // Output from user (Output)
    int yourAge;
    scanf("%d", &yourAge);
    printf("My age is : %d", yourAge);
    return 0;
}