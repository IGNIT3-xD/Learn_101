#include <stdio.h>
int main()
{
    int n, m;
    printf("Rows and Cols : \n");
    scanf("%d %d", &n, &m);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (i == 1 || i == n || j == 1 || j == m)
            {
                printf("*");
            }
            // else if (j == 1 || j == m)
            // {
            //     printf("*");
            // }
            else{
                printf(" ");
            }
        }
        
        printf("\n");
    }
    

    return 0;
}