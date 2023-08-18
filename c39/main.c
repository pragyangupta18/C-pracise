//🌟 project
// Number guessing game



#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int number ;
    int guess ;
    int nguesses = 1 ;
    srand(time(0));
    number = rand()%100 + 1 ; // generate random no. b\w 1 to 100
//    printf("The number is %d\n",number);   // - if we want to know no. before starting the game
    // keeprunning the loop until the no. is guessed
    do{
        printf("Guess the no. between 1 to 100: ");
        scanf("%d",&guess);
        if(guess>number){
            printf("pllzzz lower the no.\n");
        }
        else if(guess<number){
            printf("pllzzz higher the no.\n");
        }
        else{
            printf("You guessed it in %d turns\n", nguesses) ;
        }
        nguesses++ ;
    }while(guess!=number);
return 0 ;
}

