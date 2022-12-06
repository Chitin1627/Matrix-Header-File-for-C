#include<stdio.h>

int ifUpperTriangle(int arr[3][3]) {
    /*
    Takes a 2D Array as the parameter. Return 1 if the given matrix is
    an upper triangular matrix and 0 if the given matrix is not an upper
    triangular matrix.
    */
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            if(j<i && arr[i][j]!=0) {
                return 0;
            }
        }
    }
    return 1;
}