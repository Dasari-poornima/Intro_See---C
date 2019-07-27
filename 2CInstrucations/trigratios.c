#include<stdio.h>
#include<math.h>

int main()
{
    int ang;

    printf("Enter the angle\t:");
    scanf("%d", &ang);

    printf("sin(%d) = %f\n", ang, sin(ang));
    printf("cos(%d) = %f\n", ang, cos(ang));
    printf("tan(%d) = %f\n", ang, tan(ang));
    printf("cosec(%d) = %f\n", ang, 1/sin(ang));
    printf("sec(%d) = %f\n", ang, 1/cos(ang));
    printf("cot(%d) = %f\n", ang, 1/tan(ang));

    return 0;
}