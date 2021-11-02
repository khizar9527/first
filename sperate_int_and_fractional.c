#include <stdio.h>
int main()
{
    float n, f;
    int i;
    printf("enter the value of n\n");
    scanf("%f", &n);
    i = n;
    f = n - i;
    printf("the value of i=%d\nf=%2f", i, f);
}