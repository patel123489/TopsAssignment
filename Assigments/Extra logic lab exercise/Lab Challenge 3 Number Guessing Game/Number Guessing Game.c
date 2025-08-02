#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main() {
    int number, guess, attempts = 0, maxAttempts = 7;
    srand(time(0));
    number = rand() % 100 + 1;

    printf("Welcome to the Number Guessing Game!\n");
    printf("Guess the number between 1 and 100.\n");
    printf("You have %d attempts.\n\n", maxAttempts);

    while (attempts < maxAttempts) {
        printf("Attempt %d: Enter your guess: ", attempts + 1);
        scanf("%d", &guess);
        attempts++;

        if (guess == number) {
            printf("Correct! You guessed the number in %d attempts.\n", attempts);
            break;
        } else if (guess < number) {
            printf("Too low! Try a higher number.\n\n");
        } else {
            printf("Too high! Try a lower number.\n\n");
        }
    }
		if (guess != number) {
         printf("You've used all your attempts. The number was: %d\n", number);
    }
}
