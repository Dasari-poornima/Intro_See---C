#include<stdio.h>

int main()
{
    int c,d, temp;

    printf("Enter two values c,d\t:");
    scanf("%d %d", &c, &d);

    temp = c;
    c = d;
    d = temp;

    printf("c=%d d=%d", c, d);

    return 0;
}