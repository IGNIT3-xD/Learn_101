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

    int length = sizeof(arr) / sizeof(arr[0]);
    //printf("Length is : %d", length);

    int middleIndex = length / 2;

    printf("Middle index : %d\n", middleIndex);
    printf("Middle array : %d", arr[middleIndex]);

    return 0;
}