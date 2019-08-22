#include<stdio.h>

int main() {

    int a = 0, b = 0, c = 0;

    printf("Enter 1st number: ");
    scanf("%d", &a); 
    printf("Enter 2nd number: ");
    scanf("%d", &b); 
    printf("Enter 3rd number: ");
    scanf("%d", &c); 

// a = 20, b = 10, c = 30

    if (a > b) {
        if (a > c) {
            printf("Max is %d\n", a);
        }
        else {
            printf("Max is %d\n", c);
        }
    }
    else {
        if (b > c) {
            printf("Max is %d\n", b);
        }
        else {
            printf("Max is %d\n", c);
        }
    }
    

    return 0;
}