#include <stdio.h>
int main()
{
    int n;

    printf("Number of elements : ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the elemets :\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int min = arr[0];

    for (int j = 0; j < n; j++)
    {
        if (arr[j] > max)
        {
            max = arr[j];
        }
        else if (arr[j] < min)
        {
            min = arr[j];
        }
    }

    printf("Max element is : %d\n", max);
    printf("Min element is : %d", min);

    return 0;
}