#include<stdio.h>
#include "add.c"

/*
JUST TO TRY OUT THE FUNCTIONS WE WROTE.
*/
int main() {
    int arr1[3][3], arr2[3][3], arr3[3][3];
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            scanf("%d", &arr1[i][j]);
        }
    }
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            scanf("%d", &arr2[i][j]);
        }
    }
    MatrixAdd(arr1,arr2,arr3);
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }
    return 0;
}
