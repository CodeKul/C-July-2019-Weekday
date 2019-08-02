#include<stdio.h>

int main() {

    int arr1[5];
    int arr2[5] = {1,2,3,4,5};
    int i = 0;

    float arr3[5] = {1.2, 3.4, 5.6, 7.8, 9.0};

    printf("%.2f\n", arr3[1]);

    while (i < 5) {

        printf("arr2[%d]: %d\n", i, arr2[i]);
        i++;
    }

    return 0;
}