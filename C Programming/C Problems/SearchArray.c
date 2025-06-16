// Search element in an array
#include <stdio.h>

int main()
{
    int n;
    printf("Enter size of an array : ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter elements of array :\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    int search;
    printf("Search the no. : ");
    scanf("%d", &search);
    
    for(int j = 0; j < n; j++)
    {
        if(arr[j] == search)
        {
            printf("%d is present at %d", search, j);
            break;
        }
    }
    
    return 0;
}
