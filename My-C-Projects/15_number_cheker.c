#include <stdio.h>

int main()
{

    int a;
    printf("Enter you number : ");
    scanf("%d", &a);

    if (a < 0)
    {
        printf("Your number is Nagative.");
    }

    else if (a == 0)
    {
        printf("Your number is Zero.");
    }

    else
    {
        printf("Your number is Positive.");
    }
    return 0;
}