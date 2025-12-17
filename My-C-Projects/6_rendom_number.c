#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    srand(time(0));

    int randomNumber = (rand() % 100) + 1;
    int no_of_gaesses = 0;
    int guessed;

    do
    {
        printf("Guess the number (Between 1 to 100) : ");
        scanf("%d", &guessed);

        if (guessed > randomNumber)
        {
            printf("Lower number plz!\n");
        }
        else if (guessed < randomNumber)
        {
            printf("Higher number plz!\n");
        }

        no_of_gaesses++;
    } while (guessed != randomNumber);

    printf("You guessed the number in %d steps.", no_of_gaesses);

    return 0;
}
