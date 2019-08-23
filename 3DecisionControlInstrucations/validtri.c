#include<stdio.h>

int main()
{
    int ang1, ang2, ang3;

    printf("Enter the 3 angles of triangle\t:");
    scanf("%d %d %d", &ang1, &ang2, &ang3);

    if(ang1+ang2+ang3 == 180)
        printf("These angles form valid triangle");
    else
        printf("These angles donot form valid triangle");

    return 0;
}