#include <stdio.h>
#include <stdlib.h>
#include <time.h>




int main(){
    time_t t;
    srand((unsigned)time(&t)); // Initialization of rand()
    printf("Welcome to the game Guess the Number!\n");
    int secretNumber = rand() % 21; //0-21
    printf("Now I picked a secret number from 0 to 20... You have 5 turns!\n\n");
    int pickedNumber;
    int turns = 5;

    while((pickedNumber != secretNumber) && (turns > 0) ){
        printf("The secret number is ... ");
        scanf("%d", &pickedNumber);
        turns--;

        if(((pickedNumber < 0) || pickedNumber > 20) && (turns > 0))
            printf("That's not a number in 0-20! Try again, you have %d turns left.\n \n", turns);
        else if(pickedNumber < secretNumber && (turns > 0))
            printf("Wrong! Your picked number, %d, is too low. Guess again! You have %d turns left.\n \n", pickedNumber, turns);
        else if(pickedNumber > secretNumber && (turns > 0))
            printf("Wrong! Your picked number, %d, is too high. Guess again! You have %d turns left.\n \n", pickedNumber, turns);

    }

    if(pickedNumber == secretNumber)
        printf("That's the number! Awesome!");
    else
        printf("Wrong. You are out of your turns! Sorry. The secret number was %d.", secretNumber);


    return 0;
}
