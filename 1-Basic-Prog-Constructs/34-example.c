// Write a program to calculate tax
/*
Algorithm:
    1. Enter pay and status
    2. Check for status, if it results true compute tax with 20%
    3. Print the tax.
*/
// Date: 18-11-2023
// Iftekhar Ahmed Faruk


#include<stdio.h>

int main()
{
    char stat;
    float tax, pay;

    printf("\nEnter the payment: ");
    scanf("%f", &pay);
    printf("\nEnter status: ");
    scanf("%c", &stat);

    if(stat=='s'){
        tax = 0.20 * pay;
    }
    else{
        tax = 0.14 * pay;
    }

    printf("\nTax = %.2f\n", tax);

    return 0;
}