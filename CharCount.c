#include<stdio.h>

int main() {

    char str[] = "Codekul - The Gurukul for Coders! C-Programming Batch: 11am:12pm";
    int i = 0, ch_count = 0, dig_count = 0, sp_count = 0;

    while (str[i] != 0) {
        if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122)) {
            ch_count++;
        }
        else if (str[i] >= 48 && str[i] <= 57) {
            dig_count++;
        }
        else {
            sp_count++;
        }
        i++;
    }
    printf("Character count: %d\nDigit count: %d\nSpecial char count: %d\n", ch_count, dig_count, sp_count);

    return 0;
}