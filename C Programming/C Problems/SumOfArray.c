#include <stdio.h>
int main()
{
    int n, sum = 0;

    // int length = sizeof(arr) / sizeof(arr[0]);

    printf("Number of element : ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter %d no. of array : \n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int j = 0; j < n; j++)
    {
        sum = sum + arr[j];
    }

    printf("Sum of array is : %d", sum);

    return 0;
}