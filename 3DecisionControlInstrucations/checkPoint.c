#include<stdio.h>

int main()
{
    int x,y;

    printf("Enter (x,y) of point\t:");
    scanf("%d %d", &x, &y);


    if(x==0 && y==0)
    {
        printf("Point is on origin");
    }
    else
    {
        if(y==0)
        {
            printf("Point lies on x-axis");
        }
        if(x==0)
        {
            printf("Point lies on y-axis");
        }   
    }

    return 0;
}