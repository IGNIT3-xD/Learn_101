#include <stdio.h>
int main()
{
    int num[] = {1, 2, 3, 4};

    for (int i = 0; i <= 3; i++)
    {
        printf("%p \n", &num[i]); // Different between each array element address is 4 because it's Int.
    }

    printf("Size of num : %lu\n", sizeof(num)); // 4 Bytes for each array element, So, entire array takes (4*4)= 16 Bytes Memory

    // The memory address of the first element is the same as the name of the array
    int myNum[4] = {10, 20, 30, 40};

    printf("%p \n", myNum);
    printf("%p \n", &myNum[0]);

    // Since myNum is a pointer to the first element in myNum, you can use the * operator to access it
    printf("%d \n", *myNum);

    // To access the rest of the elements in myNum, you can increment the pointer/array (+1, +2, etc):
    printf("%d\n", *(myNum + 1));
    printf("%d\n", *(myNum + 2));

    // Or Loop through it
    for (int i = 0; i <= 3; i++)
    {
        int increment = *(myNum + i);
        printf("%d\n", increment);
    }

    // You can also change the value
    *myNum = 11;
    *(myNum + 1) = 12;

    printf("%d %d", *myNum, *(myNum + 1));

    return 0;
}