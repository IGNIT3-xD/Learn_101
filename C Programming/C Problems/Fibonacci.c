#include <stdio.h>
int main()
{
    int n, t1 = 0, t2 = 1, nextTerm;

    printf("Enter number of terms : ");
    scanf("%d", &n);

    printf("Fibonacci series is : %d %d ", t1, t2);

    for (int i = 3; i <= n; i++)
    {
        nextTerm = t1 + t2;
        printf("%d ", nextTerm);
        
        t1 = t2;
        t2 = nextTerm;
    }

    return 0;
}
// Explanation
/*
t1 = 0
t2 = 1
Fibonacci starts with 0, 1 then go on.....so, we print the first two numbers.

Now calculate next terms. 1, 2, 3, 5, 8, 13......

nextTerm = t1 + t2
         → 0 + 1 = 1
Now Update,
    t1 = t2; t1 now becomes old t2
    t1 = 1

    t2 = nextTerm; t2 now becomes the next term
    t2 = 1
    
So on,
    nextTerm = t1 + t2
             → 1 + 1 = 2
    t1 = 1
    t2 = 2

    nextTerm = 1 + 2 = 3
    t1 = 2;
    t2 = 3

    nextTerm = 2 + 3 = 5
    t1 = 3
    t2 = 5

    nextTerm = 3 + 5 = 8
    t1 = 5
    t2 = 8
*/