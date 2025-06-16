#include <stdio.h>
int main()
{
    int n;

    printf("Enter size of the array : ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter elements of the array :\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int j = n - 1; j >= 0; j--)
    {
        printf("%d\n", arr[j]);
    }

    return 0;
}