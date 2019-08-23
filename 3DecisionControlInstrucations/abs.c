#include<stdio.h>

int main()
{
    int num, temp;

    printf("Enter a number\t:");
    scanf("%d", &num);
    temp = num;

    if(num<0)
    {
        num = -1*num;
    }

    printf("abs(%d) = %d", temp, num);

    return 0;
}