// Program to demonstrate if-else statement
// it shows the letter is vowel or consonant
// Date: 18-11-2023
// Iftekhar Ahmed Faruk

#include<stdio.h>

int main(void)
{
    char ch;
    printf("\nEnter any character (a to z): ");
    scanf("%c", &ch);

    if((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u')){
        printf("\n%c is a vowel.\n", ch);
    }
    else{
        printf("\n%c is a consonant.\n", ch);
    }

    return 0;
}