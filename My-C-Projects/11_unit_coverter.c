#include <stdio.h>

int main()
{
    float a;
    printf("Enter Your number : ");
    scanf("%f", &a);

    char b;
    printf("Enter your unit (c for cm , m for meter , k for Km ) : ");
    scanf(" %c", &b);

    char c;
    printf("Enter your unit to convert (c for cm , m for meter , k for Km ) : ");
    scanf(" %c", &c);

    if (b == 'c' && c == 'm')
    {
        printf("%.2f in m is %.2f. ", a, a / 100);
    }
    else if (b == 'm' && c == 'c')
    {
        printf("%.2f in cm is %.2f. ", a, a * 100);
    }
    else if (b == 'c' && c == 'k')
    {
        printf("%.2f in Km is %f. ", a, a / 100000);
    }
    else if (b == 'k' && c == 'c')
    {
        printf("%.2f in cm is %.2f. ", a, a * 100000);
    }
    else if (b == 'm' && c == 'k')
    {
        printf("%.2f in Km is %.2f. ", a, a / 1000);
    }
    else if (b == 'k' && c == 'm')
    {
        printf("%.2f in m is %.2f. ", a, a * 1000);
    }
    else
    {
        printf("Error");
    }

    return 0;
}