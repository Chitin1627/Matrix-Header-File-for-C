#include<stdio.h>

void MatrixCof(int arr1[3][3], int p, int q, int fin[3][3]) {
    int x = 0, y = 0;
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            if(i != p && j != q){
                fin[i][j++] = arr1[i][j];
                if(y == 2){
                    y = 0;
                    x++;
                }
            }
        }
    }
}