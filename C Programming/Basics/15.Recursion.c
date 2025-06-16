#include <stdio.h>

int sumOfN(int n);

int main()
{
    int x;

    printf("Enter a no. : ");
    scanf("%d", &x);
    printf("%d", sumOfN(x));

    return 0;
}

int sumOfN(int n)
{
    if (n == 0)
        return 0;

    return n + sumOfN(n - 1);
}

// return n + sumOfN(n - 1);
/*
n = 5; 5 + sumOfN(5-1); 5 + sumOfN(4) 
n = 4; 4 + sumOfN(4-1); 4 + sumOfN(3)
n = 3; 3 + sumOfN(3-1); 3 + sumofN(2)
n = 2; 2 + sumofN(2-1); 2 + sumOfN(1)
n = 1; 1 + sumofN(1-1); 1 + sumOfn(0)
n = 0; End

Let's Calculate,
n = 5;
= 5 + sumOfN(4)
= 5 + 4 + sumOfN(3)
= 5 + 4 + 3 + sumOfN(2)
= 5 + 4 + 3 + 2 + sumOfN(1)
= 5 + 4 + 3 + 2 + 1 + sumOfN(0)
= 5 + 4 + 3 + 2 + 1 + 0
= 15
*/