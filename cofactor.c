#include<stdio.h>

void MatrixCof(int arr[3][3], int fin[3][3]) {
    /*
	Takes two matrices as parameter. Calculates the cofactor of
    the first matrix and stores it in the second matrix.
    DOESN'T RETURN ANY VALUE.
    */
    
    int m11,m12,m13,m21,m22,m23,m31,m32,m33;
    m11 = arr[1][1]*arr[2][2] - arr[1][2]*arr[2][1];
    m12 = -(arr[1][0]*arr[2][2] - arr[1][2]*arr[2][0]);
    m13 = arr[1][0]*arr[2][1] - arr[1][1]*arr[2][0];
    m21 = -(arr[0][1]*arr[2][2] - arr[0][2]*arr[2][1]);
    m22 = arr[0][0]*arr[2][2] - arr[0][2]*arr[2][0];
    m23 = -(arr[0][0]*arr[2][1] - arr[0][1]*arr[2][0]);
    m31 = arr[0][1]*arr[1][2] - arr[0][2]*arr[1][1];
    m32 = -(arr[0][0]*arr[1][2] - arr[0][2]*arr[1][0]);
    m33 = arr[0][0]*arr[1][1] - arr[0][1]*arr[1][0];
    fin[0][0] = m11;
    fin[0][1] = m12;
    fin[0][2] = m13;
    fin[1][0] = m21;
    fin[1][1] = m22;
    fin[1][2] = m23;
    fin[2][0] = m31;
    fin[2][1] = m32;
    fin[2][2] = m33;
}
