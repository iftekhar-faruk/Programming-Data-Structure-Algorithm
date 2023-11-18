// Program to calculate the absolute value of an integer.
// Date: 18-11-2023
// Iftekhar Ahmed Faruk

#include<stdio.h>

int main()
{
    int num;
    printf("\n Enter an number: ");
    scanf("%d", &num);
    
    if(num < 0){
        num = num * (-1);
    }

    printf("\n The absolute value is %d.\n\n", num);

    return 0;
}