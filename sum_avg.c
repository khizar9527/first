#include <stdio.h>
int main()
{
    int a, b, c, sum;
    float avg;
    printf("enter the value of a,b,c\n");
    scanf("%d%d%d", &a, &b, &c);
    sum = a + b + c;
    avg = sum / 3.0;
    printf("sum=%d\navarage=%f", sum, avg);
}