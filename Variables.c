#include<stdio.h>

int main() {

    int a = 10;
    int b;
    float c = 10.33;
    char d = 'A';

    // b = 20;

    printf("size of a: %lu\n", sizeof(a));
    printf("size of b: %lu\n", sizeof(b));
    printf("size of c: %lu\n", sizeof(c));
    printf("size of d: %lu\n", sizeof(d));
    
    printf("a: %d\n", a);
    printf("b: %d\n", b);
    printf("c: %f\n", c);
    printf("d: %c\n", d);

    return 0;
}