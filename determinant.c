#include<stdio.h>

int determinant(int arr[3][3]) {
    /*
    Takes a 2D array as parameter. Returns the determinant of that matrix
    as an integer.
    */
    int part1,part2,part3,fin_det;
    part1 = arr[0][0]*(arr[1][1]*arr[2][2] - arr[1][2]*arr[2][1]);
    part2 = arr[0][1]*(arr[1][0]*arr[2][2] - arr[1][2]*arr[2][0]);
    part3 = arr[0][2]*(arr[1][0]*arr[2][1] - arr[1][1]*arr[2][0]);
    fin_det = part1-part2+part3;
    return fin_det;
}