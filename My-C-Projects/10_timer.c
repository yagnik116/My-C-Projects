#include<stdio.h>
#include<unistd.h>

int main(){
    
    int sec;
    printf("Enter your timer in seconds : ");
    scanf("%d",&sec);

   while (sec > 0) {
        printf("%d seconds remaining...\n", sec);
        sleep(0.00025); 
        sec--;
    }

    printf("Time is up!");
    
    return 0;

}