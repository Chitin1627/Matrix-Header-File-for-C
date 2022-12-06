#include<stdio.h>

void MatrixTranspose(int arr1[3][3], int arr2[3][3]) {
    /*
    Takes two 2d Arrays as input. Stores the transpose of the first array
    in the second array.
    DOESN'T RETURN ANY VALUE.
    */
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            arr2[i][j] = arr1[j][i];
        }
    }
}