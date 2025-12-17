#include <stdio.h>

int main()
{

    float p;
    printf("Enter your amount : ");
    scanf("%f", &p);

    float r;
    printf("Enter your rate of interest : ");
    scanf("%f", &r);

    int n;
    printf("Enter your years : ");
    scanf("%d", &n);

    float intrest = (p * r * n) / 100;
    printf("Your simple intrest of %.4f Rupees in %.4f rate of intrest in %d years is %f. ", p, r, n, intrest);
    return 0;
}