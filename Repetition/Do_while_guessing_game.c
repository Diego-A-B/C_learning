#include <stdio.h>
#include <time.h>

#define max_num 100

int main(){
    int guess, guess_count, target;
    guess_count = 0;
    
    srand(time(0));

    target = 1+rand()%100;

    printf("Make a guess from 1-%d:\n", max_num);

    do
    {
        scanf("%d",&guess);
        guess_count++;

        if(guess < target)
        {
            printf("Guess is too low, try again:\n");
        }

        else
        {
            printf("Guess is too high, try again:\n");
        }


    } while (guess != target);

    printf("You guess the target in %d guesses", guess_count);

    return 0;
    
}