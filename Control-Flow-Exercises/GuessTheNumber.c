#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0;

    srand(time(NULL));
    number = rand() % 100 + 1;

    printf("=== Guess the Number Game ===\n");
    printf("I'm thinking of a number between 1 and 100.\n");

    while (1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess < number)
            printf("Too low! Try again.\n");
        else if (guess > number)
            printf("Too high! Try again.\n");
        else {
            printf("🎉 Correct! The number was %d.\n", number);
            printf("You guessed it in %d attempts.\n", attempts);
            break;
        }
    }

    return 0;
}
