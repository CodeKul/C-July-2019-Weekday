#include<stdio.h>

int main() {

    int a1[] = {34,57,23,89,34}, a2[] = {45,34,76,89,23};
    int res[10], i = 0;

    for (i = 0; i < 5; i++) {
        res[i] = a1[i];
    }
    
    for (i = 0; i < 5; i++) {
        res[i+5] = a2[i];
    }

    printf("a1:\t");
    for (i = 0; i < 5; i++) {
        printf("%d\t", a1[i]);
    }
    printf("\n");
    printf("a2:\t");
    for (i = 0; i < 5; i++) {
        printf("%d\t", a2[i]);
    }
    printf("\n");
    printf("res:\t");
    for (i = 0; i < 10; i++) {
        printf("%d\t", res[i]);
    }
    printf("\n");

    return 0;
}