#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    srand(time(0));

    int randomNumber = (rand() % 6) + 1;

    printf("!! Welcome to The Simple Dice Roll Simulation !!\n");

    char a;
    printf("Enter D for roll dice : ");
    scanf(" %c", &a);

    if (a == 'D' || a == 'd')
    {
        printf("The number on dice is %d.\n", randomNumber);
    }

    else
    {
        printf("!! Error !!");
    }

    return 0;
}