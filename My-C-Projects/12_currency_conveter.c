#include <stdio.h>

int main()
{

    float a;
    printf("Enter Your amount : ");
    scanf("%f", &a);

    char b;
    printf("Enter your currency (r for Rupee,p for pound,d for Doller ) :");
    scanf(" %c", &b);

    char c;
    printf("Enter your currency to convetr (r for Rupee,p for pound,d for Doller ) : ");
    scanf(" %c", &c);

    if (b == 'r' && c == 'd')
    {
        float ind_usd = a / 83.92;
        printf("%f Rupees to USD is %.4f.", a, ind_usd);
    }
    else if (b == 'd' && c == 'r')
    {
        float usd_ind = a * 83.92;
        printf("%f USD to Rupees is %f.", a, usd_ind);
    }
    else if (b == 'r' && c == 'p')
    {
        float ind_pound = a / 106.72;
        printf("%f Rupees to Pound is %f.", a, ind_pound);
    }
    else if (b == 'p' && c == 'r')
    {
        float pound_ind = a * 106.72;
        printf("%f Pound to Rupees is %f.", a, pound_ind);
    }
    else if (b == 'd' && c == 'p')
    {
        float usd_pound = a * 0.79;
        printf("%f USD to Pound is %f.", a, usd_pound);
    }
    else if (b == 'p' && c == 'd')
    {
        float pound_usd = a / 0.79;
        printf("%f Pound to USD is %f.", a, pound_usd);
    }
    else
    {
        printf("Error");
    }
    return 0;
}