#include<stdio.h>

int main() {

    char str[] = "Codekul C Programming Batch morning 11am to 12pm";
    int i = 0, counter = 0;

    for(i = 0; str[i] != '\0'; i++) {
        if (str[i] == 32) {
            counter++;
        }
    }

    printf("Number of words: %d\n", ++counter);

    return 0;
}