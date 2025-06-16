#include <stdio.h>
int main()
{
    // do
    // {
    //     // do something
    //     // Increment/ Decrement
    // } while (/* condition */);

    int i = 0;
    do
    {
        printf("%d \n", i);
        i+=5;
    } while (i <= 50 );

    return 0;
}