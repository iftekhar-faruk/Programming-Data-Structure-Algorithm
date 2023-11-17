#include<stdio.h>

int main()
{
    float temp[10];
    float sum = 0.0;
    float avg;
    int i;

    for(i=0; i<10; i++){
        printf("Enter the temperature of day %d: ", i+1);
        scanf("%f", &temp[i]);
    }
    
    for(i=0; i<10; i++){
        sum += temp[i];
    }

    avg = sum/10;

    printf("\n");
    printf("The average temperature for 10 days is = %.2f.\n\n", avg);

    return 0;
}