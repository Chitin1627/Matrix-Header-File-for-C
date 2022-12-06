#include<stdio.h>

void MatrixInput(int arr[3][3]) {
    /*
    Takes a 2D array as parameter. Takes each element of the array as input from the user.
    DOESN'T RETURN ANY VALUE.
    */
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            printf("Enter the element at position (%d, %d): ", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
    }
}