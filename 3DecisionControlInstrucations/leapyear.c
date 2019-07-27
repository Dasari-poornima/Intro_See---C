#include<stdio.h>

int main()
{
    int n;

    printf("Enter an year\t:");
    scanf("%d", &n);

    if((n%4==0 && n%100!=0) || (n%400==0))
        printf("%d is Leap year", n);
    else
        printf("%d is non leap year", n);

    return 0;
}