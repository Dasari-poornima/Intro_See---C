#include<stdio.h>

int main()
{
    int qty,dis=0;
    float rate,tot;

    printf("Enter quantity and rate\t:");
    scanf("%d %f", &qty,&rate);

    if(qty>1000)
        dis = 10;

    tot = (qty*rate) - (qty*dis*rate/100);
    printf("Total expenses = Rs.%f\n",tot);

    return 0;
}