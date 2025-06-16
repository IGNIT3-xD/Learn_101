#include <stdio.h>

int main()
{
    int n;

    printf("Enter the Array size : ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the elements : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int j = 0; j < n; j++)
    {
        printf("Element %d is = %d\n", j, arr[j]);
    }

    return 0;
}
