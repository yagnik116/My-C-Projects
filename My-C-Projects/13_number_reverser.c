#include <stdio.h>

int main()
{
    long long int reversedNumber = 0;

    long long int a;
    printf("Enter your number (more than 2 digit) : ");
    scanf("%lld", &a);

    for (; a != 0; a /= 10)
    {
        int digit = a % 10;
        reversedNumber = reversedNumber * 10 + digit;
    }

    printf("Your number in reverse order: %d\n", reversedNumber);

    return 0;
}