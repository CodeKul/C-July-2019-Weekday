#include<stdio.h>

int main() {

    int year = 0;

    printf("Enter year: ");
    scanf("%d", &year);

    if (year % 4 == 0) {
        printf("%d year is leap year!\n", year);
    }
    else {
        printf("%d year is not leap year!\n", year);
    }  

    return 0;
}