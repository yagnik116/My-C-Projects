#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    srand(time(0));
    int player, computer;

    // 0 == Rock
    // 1 == Paper
    // 2 == Scissors
    computer = (rand() % 3);

    printf("Choose 0 for Rock , 1 for Paper and 2 for Scissors : ");
    scanf("%d", &player);
    printf("Computer choose : %d\n", computer);

    if (player == computer)
    {
        printf("The match is Tie !!");
    }

    else if (player == 0 && computer == 1)
    {
        printf("You Lose!!");
    }

    else if (player == 0 && computer == 2)
    {
        printf("You Win!!");
    }

    else if (player == 1 && computer == 0)
    {
        printf("You Win!!");
    }

    else if (player == 1 && computer == 2)
    {
        printf("You Lose!!");
    }

    else if (player == 2 && computer == 0)
    {
        printf("You Lose!!");
    }

    else if (player == 2 && computer == 1)
    {
        printf("You Win!!");
    }

    else
    {
        printf("ERROR");
    }

    return 0;
}