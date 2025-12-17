#include <stdio.h>

int main()
{
    printf("Enter your first number : ");
    int a;
    scanf("%d", &a);

    char c;

    printf("Enter your oprator (+,-,/,*) : ");
    scanf(" %c", &c);

    int b;

    printf("Enter your second number : ");
    scanf("%d", &b);

    if (c == '+')
    {
        int sum = a + b;
        printf("Sum of %d and %d is %d.", a, b, sum);
    }
    else if (c == '-')
    {
        int minus = a - b;
        printf("Subtraction of %d and %d is %d.", a, b, minus);
    }
    else if (c == '/')
    {
        float division = (float)a / (float)b;
        printf("Division of %d and %d is %.2f.", a, b, division);
    }
    else if (c == '*')
    {
        int multi = a * b;
        printf("Multiplication of %d and %d is %d.", a, b, multi);
    }
    else
    {
        printf("Error!!");
    }

    return 0;
}