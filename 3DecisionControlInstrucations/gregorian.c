#include<Stdio.h>

int main()
{
    int year,day;
    long days;
    printf("Enter the year\t:");
    scanf("%d", &year);

    days = (year-2001)*365+((year-2001)/4);
    day = days%7;
    printf("1st Jan of %d is ", year);
    if(day==0)printf("Monday");
    if(day==1)printf("Tuesday");
    if(day==2)printf("Wednesday");
    if(day==3)printf("Thursday");
    if(day==4)printf("Friday");
    if(day==5)printf("Saturday");
    if(day==6)printf("Sunday");
}
    