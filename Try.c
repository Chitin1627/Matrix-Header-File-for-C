#include<stdio.h>
#include "Matrix.h"
int main() {
    int arr1[3][3], arr2[3][3]; 
    float arr3[3][3];
    printf("Enter the elements of the first matrix:\n");
    MatrixInput(arr1);
    // printf("Enter the elements of the second matrix:\n");
    // MatrixInput(arr2);
    //MatrixInput(arr2);
    //MatrixAdd(arr1,arr2,arr3);
    //MatrixTranspose(arr1, arr3);

    // int det = determinant(arr1);
    // int upper = ifUpperTriangle(arr1);
    // printf("%d\n", upper);
    // printf("%d\n", det);
    // for(int i=0;i<3;i++) {
    //     for(int j=0;j<3;j++) {
    //         printf("%d ", arr3[i][j]);
    //     }
    //     printf("\n");
    // }

    //MatrixMul(arr1,arr2,arr3);
    //printf("The result after multiplication is:\n");
    inverse(arr1,arr3);
    printf("The adjoint inverse of the given matrix:\n");
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            printf("%.2f ", arr3[i][j]);
        }
        printf("\n");
    }
    return 0;
}