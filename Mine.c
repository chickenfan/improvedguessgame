#include <stdio.h>

#define NULL 0

int main() {
    
    int ans = 7;
    int guess = NULL;
    int count = NULL;
    int limit = 5;
    
    for (;;) {
        scanf("%d", &guess);
         
        switch (guess) {
            case ans:
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
