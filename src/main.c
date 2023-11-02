#include <stdio.h>
#include "calculations.h"


int main(int argc, char const *argv[])
{
    int x;
    int y;
    printf("enter x: ");
    scanf("%d", &x);
    printf("enter y: ");
    scanf("%d", &y);
    printf("\n x + y = %.2lf \n", add(x, y));
    printf("x - y = %.2lf", subtract(x, y));
    return 0;
}
