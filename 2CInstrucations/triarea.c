#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c;
    float s, area;

    printf("Enter 3 sides of triangle\t:");
    scanf("%d %d %d", &a, &b, &c);

    s = (a+b+c)/2.0;
    area = (float)pow((double)(s*(s-a)*(s-b)*(s-c)), 0.5);

    printf("Area = %f", area);

    return 0;
}