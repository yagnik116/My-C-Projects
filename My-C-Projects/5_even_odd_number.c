#include <stdio.h>

int main()
{
    int a;
    printf("Enter your number : ");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("%d is Even number.", a);
    }

    else
    {
        printf("%d is odd number.", a);
    }

    return 0;
}