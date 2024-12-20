//  Write a C program to store and print elements of a 2D array in row-major order.
#include <stdio.h>
int main(){
    int arr[4][3][2]={
        {{1,2},{3,4},{5,6}},
        {{7,8},{9,10},{11,12}},
        {{13,14},{15,16},{17,18}},
        {{19,20},{21,22},{23,24}}
    };
    int i, j, k;
    for(i=0; i<4; i++){
        for(j=0; j<3; j++){
            for(k=0; k<2; k++){
                printf("arr[%d][%d][%d] = %d\n", i, j, k, arr[i][j][k]);
            }
        }
    }
    return 0;
}