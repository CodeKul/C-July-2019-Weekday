#include<stdio.h>
#define COUNT 10

int main() {

    int numbers[COUNT], i = 0;

    for (i = 0; i < COUNT; i++) {
        scanf("%d", &numbers[i]);
    }

    printf("Before Conversion: ");
    for ( i = 0; i < COUNT; i++) {
        printf("%d\t", numbers[i]);
    }
    printf("\n");

    for (i = 0; i < COUNT; i++) {
        if (numbers[i] < 0) {
            numbers[i] = numbers[i] * (-1);
        }
    } 

    printf("After Conversion: ");
    for ( i = 0; i < COUNT; i++) {
        printf("%d\t", numbers[i]);
    }
    printf("\n");
    
    return 0;
}