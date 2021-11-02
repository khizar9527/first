#include <stdio.h>
int main()
{
    float p, r, si;
    int n;
    printf("enter the value of p,n,r");
    scanf("%f%d%f", &p, &n, &r);
    si = (p * n * r) / 100.0;
    printf("value of si=%f", si);
}