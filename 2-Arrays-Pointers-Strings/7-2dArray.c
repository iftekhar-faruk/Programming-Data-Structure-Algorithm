// Exercise 7: Generate Prime Numbers
// Date: 18-11-2023
// Iftekhar Ahmed Faruk

#include<stdio.h>

#define M 3
#define N 4

int main(void)
{
    int A[M][N];
    int i, j;
    for(i=0; i < M; i++){
        for(j=0; j<N; j++){
            A[i][j] = i + j;
        }
    }

    for(i=0; i < M; i++){
        printf("Row %d: ", i);
        for(j=0; j<N; j++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}