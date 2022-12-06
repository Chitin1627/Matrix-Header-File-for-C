#include<stdio.h>

void MatrixAdd(int arr1[3][3], int arr2[3][3], int fin[3][3]) {
    /*
    Takes three matrices as parameter. Calculates the sum of
    the first two matrices and stores it in the third matrix.
    DOESN'T RETURN ANYTHING.
    */
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            fin[i][j] = arr1[i][j]+arr2[i][j];
        }
    }
}
