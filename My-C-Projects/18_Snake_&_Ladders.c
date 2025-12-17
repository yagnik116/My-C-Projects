#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_SNAKE 5
#define BOARD 100
#define NUM_SIDI 5

typedef struct
{
    int start;
    int end;
} Snake;

typedef struct
{
    int start;
    int end;
} Sidi;

void generateSnake(Snake snakes[], int count)
{
    for (int i = 0; i < count; i++)
    {
        do
        {
            snakes[i].start = (rand() % (BOARD - 1)) + 2;
            snakes[i].end = (rand() % (BOARD - 1)) + 1;
            
        } while (snakes[i].start < snakes[i].end);
        printf("%d. Snake position : %d, End position : %d \n", i + 1, snakes[i].start, snakes[i].end);
    }
}

void generateSidi(Sidi sidis[], int count)
{
    for (int i = 0; i < count; i++)
    {
        do
        {
            sidis[i].start = (rand() % (BOARD - 1)) + 2;
            sidis[i].end = (rand() % (BOARD - 1)) + 1;
        } while (sidis[i].start > sidis[i].end);
        printf("%d. Sidi position : %d, End position : %d \n", i + 1, sidis[i].start, sidis[i].end);
    }
}

int checkSnakes(int position, Snake snakes[], int count)
{
    for (int i = 0; i < count; i++)
    {
        if (position == snakes[i].start)
        {
            printf("Hit by snake! Moving from %d to %d\n", position, snakes[i].end);
            return snakes[i].end;
        }
    }
    return position;
}

int checkSidi(int position, Sidi sidis[], int count)
{
    for (int i = 0; i < count; i++)
    {
        if (position == sidis[i].start)
        {
            printf("Go to Sidi ! Moving from %d to %d\n", position, sidis[i].end);
            return sidis[i].end;
        }
    }
    return position;
}

void board(int p1, int p2)
{

    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            int pos = (i - 1) * 10 + j;
            if (pos == p1 && pos == p2)
            {
                printf("P1-P2%d ", pos);
            }

            else if (pos == p1)
            {
                printf(" P1 %d ", pos);
            }

            else if (pos == p2)
            {
                printf(" P2 %d ", pos);
            }
            else
            {
                printf("%4d \t", pos);
            }
        }

        printf("\n");
    }
}

int main()
{

    srand(time(0));

    int p1, p2;
    p1 = 1;
    p2 = 1;
    Snake snakes[NUM_SNAKE];

    generateSnake(snakes, NUM_SNAKE);

    Sidi sidis[NUM_SIDI];

    generateSidi(sidis, NUM_SIDI);

    board(p1, p2);

    while (p1 < 100 && p2 < 100)
    {
        char a;

        int randomNumberp1 = (rand() % 6) + 1;

        printf("P1 take your daav , press a : ");
        scanf(" %c", &a);
        printf("You got %d Number.\n", randomNumberp1);
        p1 = randomNumberp1 + p1;
        printf("New Position of p1 is : %d\n", p1);

        p1 = checkSnakes(p1, snakes, NUM_SNAKE);
        p1 = checkSidi(p1, sidis, NUM_SIDI);

        if (p1 > 100)
        {
            p1 = 100;
        }
        if (p1 >= 100)
        {
            printf("P1 win the match !!");
            break;
        }

        board(p1, p2);

        int randomNumberp2 = (rand() % 6) + 1;

        printf("P2 take your daav , press a : ");
        scanf(" %c", &a);
        printf("You got %d Number.\n", randomNumberp2);
        p2 = randomNumberp2 + p2;
        printf("New Position of p2 is : %d\n", p2);

        p2 = checkSnakes(p2, snakes, NUM_SNAKE);
        p2 = checkSidi(p2, sidis, NUM_SIDI);

        if (p2 == 100)
        {
            p2 = 100;
        }
        if (p2 >= 100)
        {
            printf("P2 win the match !!");
            break;
        }

        board(p1, p2);
    }
    return 0;
}