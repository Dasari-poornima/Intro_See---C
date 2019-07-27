#include<Stdio.h>

int main()
{
    long num, fnum;
    int rem;

    printf("Enter a 5 digit number\t:");
    scanf("%ld", &num);
    
    rem = num%10;
    fnum = rem;
    num = num/10;
    rem = num%10;
    fnum = fnum*10 + rem;
    num = num/10;
    rem = num%10;
    fnum = fnum*10 + rem;
    num = num/10;
    rem = num%10;
    fnum = fnum*10 + rem;
    num = num/10;
    rem = num%10;
    fnum = fnum*10 + rem;

    printf("Reverse = %ld", fnum);

    return 0;
}