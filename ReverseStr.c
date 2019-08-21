#include<stdio.h>

int main() {
    char str[] = "Codekul";
    int i = 0, j = 0, len = 0;

    printf("Original string: %s\n", str);

    for ( i = 0; str[i] != 0; i++) {
        len++;
    }

    for (i = 0, j = len-1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    
    printf("Reversed string: %s\n", str);

    return 0;
}
// Reverse words
// Input: "Codekul The Gurukul for Coders!"
// Output: "Coders! for Gurukul The Codekul"