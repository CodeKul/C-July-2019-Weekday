#include<stdio.h>

int main() {

    int arr[10] = {1,2,3,4,5,6,7,8,9,0};
    int len = 10, i = 0;
    for ( i = 0; i < len; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    for (i = 0; i < len - 1; i++) {
        arr[i] = arr[i + 1];
    }
    len--;
    for ( i = 0; i < len; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    return 0;
}