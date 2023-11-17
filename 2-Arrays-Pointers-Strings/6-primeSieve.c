// Exercise 6: Generate Prime Numbers using Sieve Erathosthenes
// Date: 17-11-2023
// Iftekhar Ahmed Faruk

#include<stdio.h>
#include<math.h>

#define N 100

int main()
{
    int a[N] = {[0 ... N-1] = 1}, i, j;
    int num = sqrt(N);

    for(i = 2; i <= num; i++){
        if(a[i] == 1){
            for(j = i * i; j < N; j = j+ i){
                a[j] = 0;
            }
        }
    }

    printf("Sieve of Eratosthenes\n");
    printf("Prime numbers from 2 to %d are ...\n", N-1);
    for(i=2; i < N; i++){
        if(a[i]){
            printf("%4d", i);
        }
    }

    printf("\n\n");

    return 0;
}