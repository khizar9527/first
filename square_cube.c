#include <stdio.h>
#include <math.h>
int main()
{
    int n, square, cube;
    printf("enter the value of n\n");
    scanf("%d", &n);
    square = pow(n, 2);
    cube = pow(n, 3);
    printf("square=%d\ncube=%d", square, cube);
}