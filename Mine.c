#include <stdio.h>

#define NULL 0
#define ANS 7

int main() {

    int guess = NULL;
    int count = NULL;
    int limit = 5;

    for (;;) {
        printf("Enter Guess: ");
        scanf_s("%d", &guess);

        switch (guess) {
        case ANS:
            printf("You Win!\n");
            return 0;
            break;

        default:
            printf("Try Again\n");
            count++;
            break;
        }

        if (count == limit) {
            printf("You Lost!!!\n");
            return -1;
        }
    }
}
