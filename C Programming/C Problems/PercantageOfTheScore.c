#include <stdio.h>

int main()
{
    int maxScore, myScore;

    printf("Your Score : ");
    scanf("%d", &myScore);
    printf("Max Score : ");
    scanf("%d", &maxScore);

    float per = (float)myScore / maxScore * 100;
    printf("Percentage of number is = %3.f", per);
    return 0;
}