#include<stdio.h>

void adjoint(int arr[3][3], int fin[3][3]) {
    /*
    Takes two 2D arrays as input. Stores the adjoint of the first array
    in the second array.
    DOESN'T RETURN ANYTHING.
    */
    int m11,m12,m13,m21,m22,m23,m31,m32,m33,temp[3][3];
    m11 = arr[1][1]*arr[2][2] - arr[1][2]*arr[2][1];
    m12 = -(arr[1][0]*arr[2][2] - arr[1][2]*arr[2][0]);
    m13 = arr[1][0]*arr[2][1] - arr[1][1]*arr[2][0];
    m21 = -(arr[0][1]*arr[2][2] - arr[0][2]*arr[2][1]);
    m22 = arr[0][0]*arr[2][2] - arr[0][2]*arr[2][0];
    m23 = -(arr[0][0]*arr[2][1] - arr[0][1]*arr[2][0]);
    m31 = arr[0][1]*arr[1][2] - arr[0][2]*arr[1][1];
    m32 = -(arr[0][0]*arr[1][2] - arr[0][2]*arr[1][0]);
    m33 = arr[0][0]*arr[1][1] - arr[0][1]*arr[1][0];
    temp[0][0] = m11;
    temp[0][1] = m12;
    temp[0][2] = m13;
    temp[1][0] = m21;
    temp[1][1] = m22;
    temp[1][2] = m23;
    temp[2][0] = m31;
    temp[2][1] = m32;
    temp[2][2] = m33;
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            fin[i][j] = temp[j][i];
        }
    }
}