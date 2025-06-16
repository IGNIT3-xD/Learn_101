#include <stdio.h>

void swap(int *x, int *y);

int main()
{
    int n, m;

    printf("Enter two numbers : \n");
    scanf("%d %d", &n, &m);
    printf("Before swap : x = %d, y = %d \n", n, m);

    swap(&n, &m);
    printf("After swap : x = %d, y = %d \n", n, m);

    return 0;
}

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}