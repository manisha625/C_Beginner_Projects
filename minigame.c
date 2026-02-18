#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int random, guess;
    int no_of_guess = 0;
    srand(time(NULL));

    printf("welcome to the guessing number game\n");
    random = rand()% 100 + 1; // genrating between 0-100
do{

   printf("\nplease enter your guess between 1-100:\n");
        scanf("%d", &guess);
        no_of_guess++;

        if (guess < random)
        {
            printf("guess a larger number\n");
        }
        else if (guess > random)
        {
            printf("guess a smaller number\n");
        }
        else
        {
            printf("you have successfully guessed the number  in %d attempts yeeeeeyyyyyyyyy!!!!!!!!!!!\n", no_of_guess);
        }

    } while (guess != random);
     printf("\n bie bieeee Come back againn");
   printf("\n Developed by Manisha");
}