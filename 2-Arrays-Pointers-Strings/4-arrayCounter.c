// Example 2: Array of Counters
// Date: 17-11-2023
// Iftekhar Ahmed Faruk


#include<stdio.h>

int main(void)
{
    int ratingCounters[6] = {0, 0 , 0, 0, 0, 0}, i, response;

    for(i = 1; i<10; i++){
        printf("Enter your responses(between 1 and 5): ");
        scanf("%d", &response);
        if(response < 1 || response > 5){
            printf("Bad response: %d\n", response);
        }
        else{
            ++ratingCounters[response];
        }
    }

    printf("\n\nRating Number of Responses\n");
    printf("------------------------------\n");
    for(i=1; i<=5; i++){
        printf("%d   %d\n", i, ratingCounters[i]);
    }

    return 0;
}