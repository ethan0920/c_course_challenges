#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    time_t t;
    srand((unsigned) time(&t));
    int randomNumber = rand() % 21;
    int guess = 0;
    int maxGuess = 5;
    
    while (guess != randomNumber)
    {
        printf("You have %i guesses left!\n", maxGuess);
        printf("I am thinking of a number between 0-20. Take a guess: ");
        scanf("%i", &guess);   
        
        if (maxGuess == 1) 
        {
            break;
        }
        if (guess > 20) 
        {
            while (guess > 20 && guess > 0)
            {
                printf("Please enter a number less than 20 and greater than 0: ");
                scanf("%i", &guess);
            }
        } else
        {
            maxGuess--;
            if (guess > randomNumber) 
            {
                printf("Too high\n");
            } else if (guess == randomNumber) 
            {
                break;
            } else 
            {
                printf("Too low\n");
            }
            
        }
    }
    
    if (maxGuess == 0 && guess != randomNumber)
    {
        printf("You lost! The number was %i\n", randomNumber);
    } else
    {
        printf("You won! The number was %i\n", randomNumber);
    }
    
    return 0;
}
