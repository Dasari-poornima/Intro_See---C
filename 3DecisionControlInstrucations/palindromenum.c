#include<Stdio.h>

int main()
{
    long num, fnum, temp;
    int rem;

    printf("Enter a 5 digit number\t:");
    scanf("%ld", &num);
    temp = num;

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

    if(temp==fnum)
    {
        printf("The given number is palindrome");
    }

    return 0;
}