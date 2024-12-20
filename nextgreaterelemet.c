// //code nextgreater element 
// [10, 4, 5, 90, 120, 80]
// [120, 5, 90, 120, 120, -1]

#include <stdio.h>

void printNGE(int arr[], int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        int next = -1;
        for (j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                next = arr[j];
                break;
            }
        }
        printf("%d -- %d\n", arr[i], next);
    }
}

int main() {
    int arr[] = {10, 4, 5, 90, 120, 80,120, 5, 90, 120, 120, -1};
    int n = sizeof(arr) / sizeof(arr[0]);
    printNGE(arr, n);
    return 0;
}