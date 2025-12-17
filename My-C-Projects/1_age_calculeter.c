#include <stdio.h>

int main()
{
    int birth_year, current_year, age;

    printf("Enter your date of year : ");
    scanf("%d", &birth_year);

    printf("Enter your current year : ");
    scanf("%d", &current_year);

    if (birth_year == current_year)
    {
        printf("Your age is 0 year.");
    }
    else if (birth_year <  current_year)
    {
        age = current_year - birth_year;
        printf("You are %d years old.", age);
    }
    else
    {
        printf("Something went worng!!");
    }

    return 0;
}