#include <stdio.h>
int main()
{
    float add, div, mul, sub, a, b;
    printf("enetr the value of a,b\n");
    scanf("%f%f", &a, &b);
    add = a + b;
    mul = a * b;
    div = a / b;
    sub = a - b;
    printf("addition=%f\nsubstraction=%f\nmultiplication=%f\ndivision=%f", add, sub, mul, div);
}