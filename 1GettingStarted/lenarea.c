#include<stdio.h>

int main()
{
    float len,bre,rad, rarea, rperi, carea, ccircum;

    printf("Enter length, breadth of rectangle\t:");
    scanf("%f %f", &len, &bre);

    printf("Enter radius of the circle\t:");
    scanf("%f", &rad);

    rarea = len*bre;
    rperi = 2*(len+bre);
    carea = 3.14*rad*rad;
    ccircum = 2*3.14*rad;

    printf("Rectangle\nArea=%f\tPerimeter=%f\nCircle\nArea=%f\tCircumference=%f", rarea, rperi, carea, ccircum);

    return 0;
}