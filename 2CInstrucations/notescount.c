#include<stdio.h>

int main()
{
    int n, count=0, t;
    
    printf("Enter the sum\t:");
    scanf("%d", &n);

    t = n/100;
    count += t;
    n -= t*100;
    t = n/50;
    count += t;
    n -= t*50;
    t = n/10;
    count += t;
    n -= t*10;
    t = n/5;
    count += t;
    n -= t*5;
    t = n/2;
    count += t;
    n -= t*2;
    t = n/1;
    count += t;
    n -= t*1;

    printf("%d", count);
    return 0;
}