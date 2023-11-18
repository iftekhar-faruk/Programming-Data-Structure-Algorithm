// Program to determine if a year is a leap year.
// Date: 18-11-2023
// Iftekhar Ahmed Faruk

#include<stdio.h>

int main()
{
    int year, rem_4, rem_100, rem_400;

    printf("Enter your year to be tested: ");
    scanf("%d", &year);

    rem_4 = year % 4;
    rem_100 = year % 100;
    rem_400 = year % 400;

    if((rem_4 == 0 && rem_100 != 0) || rem_400 == 0){
        printf("\nIt's a leap year.\n");
    }
    else{
        printf("\nNope, it's not a leap year.\n");
    }

    return 0;
}