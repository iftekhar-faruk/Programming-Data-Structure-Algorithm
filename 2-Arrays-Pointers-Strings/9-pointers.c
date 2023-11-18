// Exercise 9: Program to illustrate pointers
// Date: 18-11-2023
// Iftekhar Ahmed Faruk

#include<stdio.h>

int main(void)
{
    int a = 10, b = 5;
    int *ip;

    ip = &a;
    printf("a = %d, ip = %p, *ip = %d\n", a, ip, *ip);

    *ip = 4;
    printf("a = %d, ip = %p, *ip = %d\n", a, ip, *ip);

    ip = &b;
    printf("b = %d, ip = %p, *ip = %d\n", b, ip, *ip);

    return 0;
}