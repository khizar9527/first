#include <stdio.h>
int main()
{
    float x, y, z;
    printf("enter the value of x,y\n");
    scanf("%f%f", &x, &y);
    z = (x * x + 2 * y) / (x * x * x - 3 * y);
    printf(" the value of z=%f", z);
}