#include <stdio.h>
int main()
{
    int a, b, t;
    printf("enter the value of a,b\n");
    scanf("%d%d", &a, &b);
    t = a;
    a = b;
    b = t;
    printf("the value of a=%d,b=%d", a, b);
}