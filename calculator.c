#include <stdio.h>

int main(void)
{
    long long x ;
    long long y ;
    printf("Your first number: ");
    scanf("%lld", &x);
    printf("Your second number: ");
    scanf("%lld", &y);

    double z = (double) x / (double) y;
    printf("%.20f\n", z);
}