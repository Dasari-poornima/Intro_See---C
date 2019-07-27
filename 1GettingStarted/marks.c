#include<stdio.h>

int main()
{
    int s1,s2,s3,s4,s5;
    float agg,per;

    printf("Enter marks of the student in 5 subjects\t:");
    scanf("%d %d %d %d %d", &s1,&s2,&s3,&s4,&s5);

    agg = (s1+s2+s3+s4+s5)/5.0;
    per = (s1+s2+s3+s4+s5)/500.0*100;

    printf("agg = %f\tper = %f", agg, per);

    return 0;
}