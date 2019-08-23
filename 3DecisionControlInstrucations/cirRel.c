#include<stdio.h>
#include<math.h>

int main()
{
    
    int cx,cy,px,py;
    float r,dist;

    printf("Enter ceenter coordinates of circle\t:");
    scanf("%d %d", &cx, &cy);

    printf("Enter radius of circle\t:");
    scanf("%f", &r);

    printf("Enter point coordinates\t:");
    scanf("%d %d", &px, &py);

    dist = sqrt(pow((px-cx),2) + pow((py-cy),2));

    if(dist < r)
    {
        printf("Given point is inside circle");
    }
    if(dist == r)
    {
        printf("Given point is on the circle");
    }
    if(dist > r)
    {
        printf("Given point is outside circle");
    }
    
    return 0;
}