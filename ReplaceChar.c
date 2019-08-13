#include<stdio.h>

int main() {

    char str[] = "Codekul - The Gurukul for Coders!";
    char search_ch, replace_ch;
    int i = 0;

    printf("Enter search char: ");
    scanf(" %c", &search_ch);

    printf("Enter replace char: ");
    scanf(" %c", &replace_ch);

    while (str[i] != 0) {
        if (str[i] == search_ch) {
            str[i] = replace_ch;
        }
        i++;
    }
    
    printf("Replaced str: %s\n", str);
    
    return 0;
}