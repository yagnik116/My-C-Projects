#include <stdio.h>
#include <stdlib.h>

int main()
{
    float old = 5000;

    printf("!! Welcome to the Bank !!\n");

    char a[50];
    printf("Enter your name : ");
    scanf("%s", &a);

    int b;
    printf("Enter your account number : ");
    scanf("%d", &b);

    char d;

    printf("Enter letter 'C or 'c' for check balance : \n");
    
    printf("Enter letter 'D' or 'd' for deposit money  : \n");

    printf("Enter letter 'W' or 'w' for withdraw money : \n");
    scanf(" %c", &d);
    
    if (d == 'd' || d == 'D')
    {
        float x;
        printf("Enter your amount of money to deposit : ");
        scanf("%f", &x);

        float new2 = old + x;
        printf("Your current balance is %.4f.\n", new2 );
    }
    else if (d == 'W' || d == 'w')
    {
        float y;
        printf("Enter your amount of money to deposit : ");
        scanf("%f", &y);

        float new1 = old - y;
        printf("Your current balance is %.4f.\n", new1);
    }
    else if (d == 'C' || d == 'c')
    {
        printf("Your current balance is %.4f.\n", old);
    }
    else
    {
        printf("!! ERROR !!");
    }

    return 0;
}