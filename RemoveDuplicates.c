#include<stdio.h>

int main() {

    int arr[10] = {1,1,2,3,4,4,5,6,6,6};
    int len = 10, i = 0, j = 0, k = 0;
    for ( i = 0; i < len; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");

    for (j = 0; j < len; j++) {
        for (i = 0; i < len; i++) {
            if (arr[j] == arr[i] && i != j) {
                for(k = i; k < len; k++) {
                    arr[k] = arr[k + 1];
                }
                len--;
            }
        }
    }
    
    for ( i = 0; i < len; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");

    return 0;
}