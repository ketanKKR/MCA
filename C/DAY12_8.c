#include <stdio.h>
#include <conio.h>

int i,j;

void matrixSum(int matrix1[3][3],int matrix2[3][3],int matrix3[3][3]){
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            matrix3[i][j]=matrix1[i][j]+matrix2[i][j];
        }
    }
}

void printMatrix(int matrix[3][3]){
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int matrix1[3][3]={5,5,7,2,3,6,8,9,3};
    int matrix2[3][3]={2,3,6,3,5,7,2,4,7};
    int matrix3[3][3];
    clrscr();
    
    printf("\nMatrix1:\n");
    printMatrix(matrix1);

    printf("\nMatrix2:\n");
    printMatrix(matrix2);

    matrixSum(matrix1,matrix2,matrix3);
    printf("\nSum of Matrix:\n");
    printMatrix(matrix3);

    getch();
    return 0;
}