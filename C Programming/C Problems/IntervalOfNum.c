#include <stdio.h>

void interval(int start, int end)
{
    for (int i = start; i <= end; i++)
    {
        printf("%d ",i);
    }
    
}

int main()
{
    int start, end;

    printf("Enter starting number : ");
    scanf("%d", &start);
    printf("Enter ending number : ");
    scanf("%d", &end);

    interval(start, end);

    return 0;
}