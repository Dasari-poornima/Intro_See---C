#include<stdio.h>

int main()
{
    int bsal;
    float gsal, da, hra;

    printf("Enter value of base salary\t:",&bsal);
    scanf("%d", &bsal);

    da = 0.40;
    hra = 0.20;

    gsal = bsal + (bsal * da) + (bsal * hra);

    printf("%f\n", gsal);
    
    return 0;
}