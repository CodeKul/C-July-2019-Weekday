// Reverse words
// Input: "Codekul The Gurukul for Coders!"
//          !sredoC rof lukuruG ehT lukedoC
// Output: "Coders! for Gurukul The Codekul"

#include<stdio.h>

int main() {

    char str[] = "Codekul The Gurukul for Coders!";
    int i = 0, len = 0, j = 0, k = 0;

    printf("Original: %s\n", str);
    for ( i = 0; str[i] != 0; i++) {
        len++;
    }
    for (i = 0, j = len-1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    for (i = 0; 1 ; i++) {
        if (str[i] == 32) {
            for (j = i-1; k < j; k++, j--) {
                char temp = str[k];
                str[k] = str[j];
                str[j] = temp;
            }
            k = i + 1;
        }
        if (str[i] == '\0') {
            for (j = i-1; k < j; k++, j--) {
                char temp = str[k];
                str[k] = str[j];
                str[j] = temp;
            }
            break;
        }
    }
    printf("Reversed: %s\n", str);
    return 0;
}