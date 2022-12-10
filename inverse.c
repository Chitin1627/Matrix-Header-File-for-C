#include <stdio.h>
#include "adjoint.c"
#include "determinant.c"

void inverse(int arr[3][3], float fin[3][3]){
	/*
	Takes two matrices as parameter. Calculates the inverse of
    the first matrix and stores it in the second matrix.
    DOESN'T RETURN ANY VALUE.
    */
	int fin1[3][3], det;
	det = (float)determinant(arr);
	adjoint(arr, fin1);

	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			fin[i][j] = (float)fin1[i][j] / det;
		}
	}
}