#include<stdio.h>
#define COUNT 100


int main() {

    char arr1[COUNT];
    int i = 0;

    // printf("Enter %d array elements: ", COUNT);
    // for (i = 0; i < COUNT; i++) {
    //     scanf(" %c", &arr1[i]);
    // }
     
    printf("Enter string: ");
    scanf("%[^\n]", arr1);

    printf("Array elements:\n");

    // for (i = 0; arr1[i] != '\0'; i++) {
    //     printf("%c", arr1[i]);
    // }

    printf("%s", arr1);

    printf("\n");

    return 0;
}