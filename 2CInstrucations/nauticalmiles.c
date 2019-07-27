#include<stdio.h>
#include<math.h>

int main()
{
    int l1,l2,g1,g2;
    float dist;

    printf("Enter lat long values(in degrees)\t:");
    scanf("%d %d", &l1, &g1);
    printf("Enter lat long values(in degrees)\t:");
    scanf("%d %d", &l2, &g2);

    dist = 3963*acos((sin(l1)*sin(l2))+(cos(l1)*cos(l2)*cos(g2-g1)));

    printf("%f", dist);

    return 0;
}