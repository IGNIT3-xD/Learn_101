#include <stdio.h>
int main()
{
    int n, count = 0;

    printf("Number of elements : ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the elemets :\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int j = 0; j < n; j++)
    {
        if (arr[j] < 0)
        {
           printf("Negative element/s is/are : %d\n", arr[j]);
           count++;
        }
    }
    printf("Total negative elements are : %d", count);

    return 0;
}
