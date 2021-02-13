#include <stdio.h>

#define NULL 0
#define ANS 7

int main() {
    
    int guess = NULL;
    int count = NULL;
    int limit = 5;
    
    for (;;) {
        scanf("%d", &guess);
         
        switch (guess) {
            case ANS:
                printf("You Win!");
                break;
               
            default:
                printf("Try Again");
                count++;
        }
        
        if (count == limit) {
               printf("You Lost!!!");
            return -1;
        }
    }
}
