#include<stdio.h>

int main()
{
    float km,m,ft,inc,cen;

    printf("Enter value of distance in km\t:");
    scanf("%f", &km);

    m = km*1000;
    ft = 10*m/3;
    inc = ft*12;
    cen = inc*2.5;

    printf("km = %f\tm = %f\tft = %f\tinc = %f\tcen = %f", km, m, ft, inc, cen);

    return 0;
}