#include<stdio.h>

void MatrixMul(int arr1[3][3], int arr2[3][3], int fin[3][3]) {
    /*
    Takes three matrices as parameter. Calculates the protduc of
    the first two matrices and stores it in the third matrix.
    DOESN'T RETURN ANY VALUE.
    */
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            for (int k = 0; k < 3; k++)
            {
                fin[i][j] += arr1[i][k] * arr2[k][j];
            }   
        }
    }
}