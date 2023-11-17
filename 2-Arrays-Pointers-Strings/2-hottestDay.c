// Example 2: Find the Hottest Day
// Date: 17-11-2023
// Iftekhar Ahmed Faruk

#include<stdio.h>

#define DAYS 5

int main()
{
    float temp[DAYS],max;
    int hottestDay, i;

    for(i=0; i<DAYS; i++){
        printf("Enter the temperature of day %d: ", i+1);
        scanf("%f", &temp[i]);
    }

    hottestDay = 0;
    max = temp[hottestDay];

    for(i=1; i<DAYS; i++){
        if(max < temp[i]){
            hottestDay = i;
            max = temp[i];
        }
    }
    printf("\n");
    printf("The hottest day was day %d with temperature %.2f.\n\n", (hottestDay+1), max);

    return 0;
}