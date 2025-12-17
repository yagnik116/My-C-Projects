#include <stdio.h>

int main()
{
    int score = 0;
    char ans;

    printf("Welcome to the Quiz competition !!\n");
    printf("Que no :- 1\n");
    printf("What is ans of (5+5+5+5+5+5+5+5+5+5+5+5)*0\n");
    printf("(a) 60 (b) 25 (c) 0 (d) 5\n");
    printf("Enter your answer : ");
    scanf(" %c",&ans);



    if (ans == 'c')
    {

        printf(" You are right !!\n");
        score++;
    }
    else
    {
        printf("Your answer is wrong !!\n");
    }

    printf("Que no :- 2\n");
    printf("which is smallest state of india ? \n");
    printf("(a) Gujarat (b) Kerela (c) Utar Pradesh (d) Goa\n");
    printf("Enter your answer : ");
    scanf(" %c",&ans);

    if (ans == 'd')
    {

        printf("You are right !!\n");
        score++;
        
    }
    else
    {
        printf("Your answer is wrong !!.\n");
    }

    printf("Que no :- 3\n");
    printf("Which is open world game ?\n ");
    printf("(a) PUBG (b) Call of Duty (c) GTA 5 (d) Clash of Clans\n");
    printf("Enter your answer : ");
    scanf(" %c",&ans);


    if (ans == 'c')
    {

        printf("You are right !!\n");
        score++;
    }
    else
    {
        printf("Your answer is wrong !!\n");
    }

    printf("Your score is %d out of 3.", score);

    return 0;
}