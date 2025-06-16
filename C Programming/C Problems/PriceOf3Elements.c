#include <stdio.h>
int main()
{
    float price[3];

    printf("Enter prices of 3 products : \n");
    /*scanf("%f %f %f", &price[0], &price[1], &price[2]);

    printf("Prices are : %.3f, %.3f, %.3f \n", price[0], price[1], price[2]);

    printf("Final price 1 after VAT : %3.f\n", price[0] + (0.15 * price[0]));
    printf("Final price 2 after VAT : %3.f\n", price[1] + (0.15 * price[1]));
    printf("Final price 3 after VAT : %3.f\n", price[2] + (0.15 * price[2]));*/

    // Another method
    for (int i = 0; i <= 2; i++)
    {
        scanf("%f", &price[i]);
    }
    
    for (int j = 0; j <= 2; j++)
    {
        printf("Prices are : %f ", price[j]);
        printf("Final Price : %f\n", price[j] + (0.15 * price[j]));
    }
    return 0;
}