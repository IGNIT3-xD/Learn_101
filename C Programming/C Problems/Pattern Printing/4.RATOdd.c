#include <stdio.h>
int main()
{

    for (int row = 1; row <= 5; row++)
    {
        int a = 1;

        for (int col = 1; col <= row; col++)
        {
            printf("%d ", a);
            a = a + 2;
        }

        printf("\n");
    }

    // Alphabet
    int n;
    printf("Row : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {   
        int a = 65;
        for (int j = 1; j <= i; j++)
        {
            char c = (char) a;
            
            printf("%c ", c);
            a++;
        }
        
        printf("\n");
    }

    return 0;
}