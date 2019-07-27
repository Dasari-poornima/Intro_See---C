#include<stdio.h>

int main()
{
    float fah,cel;

    printf("Enter the temp in fahrenheit\t:");
    scanf("%f", &fah);

    cel = (fah-32)*5/9;

    printf("cel = %f\n", cel);

    return 0;
}