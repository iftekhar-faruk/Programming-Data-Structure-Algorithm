// Exercise 8: Matrix Multiplication
// Date: 18-11-2023
// Iftekhar Ahmed Faruk

#include<stdio.h>

#define N 10

int main(void){
    int a[N][N], b[N][N], c[N][N];
    int aRows, aCols, bRows, bCols, cRows, cCols;
    int i, j, k, sum;

    printf("\nNumber of Columns of the First Matrix = ");
    printf("\nNumber of Rows of the Second Matrix.....");
    printf("\n----------------------------------------\n\n");
    // First Matrix
    printf("Enter the Rows and Columns of First Matrix: ");
    scanf("%d %d", &aRows, &aCols);

    printf("\nEnter the values of the First Matrix");
    printf("\nEnter column wise ------------------\n");
    for(i = 0; i < aRows; i++){
        for(j = 0; j < aCols; j++){
            scanf("%d", &a[i][j]);
        }
    }

    // Second Matrix
    printf("Enter the Rows and Columns of Second Matrix: ");
    scanf("%d %d", &bRows, &bCols);

    printf("\nEnter the values of the Second Matrix: ");
    printf("\nEnter column wise --------------------\n");
    for(i = 0; i < bRows; i++){
        for(j = 0; j < bCols; j++){
            scanf("%d", &b[i][j]);
        }
    }
    
    // Print the first Matrix
    printf("\nFirst Matrix");

    for(i = 0; i < aRows; i++){
        for(j = 0; j < aCols; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    // Print the Second Matrix
    printf("\nSecond Matrix: ");

    for(i = 0; i < bRows; i++){
        for(j = 0; j < bCols; j++){
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    cRows=aRows;
    cCols=bCols;
    // Matrix Multiplication
    if(aCols != bRows){
        printf("Can not Multiply.");
    }
    else{
        for(i = 0; i < cRows; i++){
            for(j = 0; j < cCols; j++){
                sum = 0;
                for(k = 0; k < aCols; k++){
                    sum = sum + (a[i][k] * b[k][j]);
                }
                c[i][j] = sum;
            }
        }
    }

    // Print the Second Matrix
    printf("\nFinal Matrix is:\n");

    for(i = 0; i < cRows; i++){
        for(j = 0; j < cCols; j++){
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }


    printf("\n\n");
    return 0;
}