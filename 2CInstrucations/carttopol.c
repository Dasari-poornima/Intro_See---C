#include<stdio.h>
#include<math.h>

int main()
{
    int x,y;
    float r, t;

    printf("Enter the cartesian coordinates\t:");
    scanf("%d %d", &x, &y);

    r = sqrt(pow(x,2)+pow(y,2));
    t = atan(((double)y)/x);

    printf("The polar coordinates (r,t) is (%f, %f)", r, t);
    return 0;
}