#include<Stdio.h>

int main()
{
    long num;
    int rem, sum=0;

    printf("Enter a 5 digit number\t:");
    scanf("%ld", &num);
    
    rem = num%10;
    sum +=rem;
    num = num/10;
    rem = num%10;
    sum +=rem;
    num = num/10;
    rem = num%10;
    sum +=rem;
    num = num/10;
    rem = num%10;
    sum +=rem;
    num = num/10;
    rem = num%10;
    sum +=rem;

    printf("Sum = %d", sum);

    return 0;
}