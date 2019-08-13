#include<stdio.h>

int main() {

    char str[] = "Codekul - The Gurukul for Coders!";
    int i = 0;

    while (str[i] != 0) {
        if (str[i] >= 97 && str[i] <= 122) {
            str[i] = str[i] - 32;
        }
        i++;
    }
    
    printf("Uppercase: %s\n", str);
    return 0;
}