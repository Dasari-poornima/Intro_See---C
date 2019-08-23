#include<stdio.h>

int main()
{
    int len, bre,area,peri;

    printf("Enter length and breadth of rectangle\t:");
    scanf("%d %d", &len, &bre);

    area = len*bre;
    peri = 2*(len+bre);

    if(area>peri)
    {
        printf("Area = %d > Perimeter = %d", area, peri);
    }
    else
    {
        printf("Area = %d < Perimeter = %d", area, peri);
    }
    
    return 0;
}