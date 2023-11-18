// Program to demonstrate use of if statement
// Date: 18-11-2023
// Iftekhar Ahmed Faruk

#include<stdio.h>

int main()
{
    int j;
    printf("\n Enter a number: ");
    scanf("%d", &j);
    printf("\n The number you entered is %d.\n", j);
    if(j>100){
        printf("\n Ah! you think too big.\n");
    }

    return 0;
}