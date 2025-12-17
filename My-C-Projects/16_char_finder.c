#include<stdio.h>

int main(){
    
    char c;
    printf("Enter your Char : ");
    scanf(" %c",&c);

    if (c >= 'A' && c<= 'Z')
    {
        printf("Your char is Upper case.");
    }
    else if (c >= 'a' && c<= 'z')
    {
        printf("Your char is lower case.");
    }
    else if (c >= '0' && c<= '9')
    {
        printf("Your char is Number.");
    }
    else
    {
        printf("Your char is sepical char.");
    }
    
    return 0;

}