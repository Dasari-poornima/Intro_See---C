#include<stdio.h>

int main()
{
    int x1,y1,x2,y2,x3,y3;
    float m1,m2;

    printf("Enter 3 points (x,y) respectively\t:");
    scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);

    m1 = ((float)(y2-y1))/(x2-x1);
    m2 = ((float)(y3-y2))/(x3-x2);

    if(m1==m2)
    {
        printf("The three points fall on one straight line");
    }
    else
    {
        printf("The three points are not on straight line");
    }
    
    return 0;
}