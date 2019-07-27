#include<stdio.h>

int main()
{
    int cp,sp, net;

    printf("Enter cost and selling prices of item\t:");
    scanf("%d %d", &cp, &sp);

    if(cp<sp)
    {
        net = sp - cp;
        printf("Seller had a profit of %d", net);
    }
    else if(cp>sp)
    {
        net = cp - sp;
        printf("Seller had a loss of %d", net);
    }
    else
    {
        printf("Seller had neither profit nor loss");
    }
    

    return 0;
}