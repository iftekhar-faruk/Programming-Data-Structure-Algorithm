// Program to determine if a number is even or odd.
// Date: 18-11-2023
// Iftekhar Ahmed Faruk

#include<stdio.h>

int main()
{
    int number, remainder;

    printf("Enter your number to be tested: ");
    scanf("%d", &number);

    remainder = number % 2;

    if(remainder == 0){
        printf("\nThe number is even.\n");
    }
    else{
        printf("\nThe number is odd.\n");
    }

    return 0;
}