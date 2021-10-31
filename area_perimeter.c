#include <stdio.h>
int main()
{
    float a, p, r;
    printf("enter the value of r\n");
    scanf("%f", &r);
    a = 3.14 * r * r;
    p = 2 * 3.14 * r;
    printf("Area=%f\nPerimeter=%f", a, p);
}