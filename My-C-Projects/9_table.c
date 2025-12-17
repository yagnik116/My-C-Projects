#include <stdio.h>

int main()
{
    int a;
    printf("Enter your number : ");
    scanf("%d", &a);

    for (int i = 0; i <= 10; i++)
    {
        int table = a * i;
        printf("%d X %d = %d\n", a, i, table);
    }

    return 0;
}