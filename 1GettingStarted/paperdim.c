#include<stdio.h>

int main()
{
    int dim1 = 1189, dim2 = 841;

    printf("A0 dimensions:\n%dmm*%dmm\n", dim1, dim2);
    dim1 = dim1/2;
    printf("A1 dimensions:\n%dmm*%dmm\n", dim2, dim1);
    dim2 = dim2/2;
    printf("A2 dimensions:\n%dmm*%dmm\n", dim1, dim2);
    dim1 = dim1/2;
    printf("A3 dimensions:\n%dmm*%dmm\n", dim2, dim1);
    dim2 = dim2/2;
    printf("A4 dimensions:\n%dmm*%dmm\n", dim1, dim2);
    dim1 = dim1/2;
    printf("A5 dimensions:\n%dmm*%dmm\n", dim2, dim1);
    dim2 = dim2/2;
    printf("A6 dimensions:\n%dmm*%dmm\n", dim1, dim2);
    dim1 = dim1/2;
    printf("A7 dimensions:\n%dmm*%dmm\n", dim2, dim1);
    dim2 = dim2/2;
    printf("A8 dimensions:\n%dmm*%dmm\n", dim1, dim2);

    return 0;
}