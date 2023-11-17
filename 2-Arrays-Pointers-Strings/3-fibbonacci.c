// Example 3: Find the Fibonacci Series
// Date: 17-11-2023
// Iftekhar Ahmed Faruk

#include<stdio.h>

#define N 15    // The value of N should not exceed 15

int main(void)
{
    int Fib[N];
    int i;
    Fib[0] = 0;
    Fib[1] = 1;

    for(i=2; i<N; i++){
        Fib[i] = Fib[i-1] + Fib[i-2];
    }

    printf("\n");
    printf("Fibonacci Series (First %d)\n", N);
    printf("---------------------------\n");
    for(i=0; i<N; i++){
        printf("%4d", Fib[i]);
    }

    printf("\n\n");

    return 0;
}