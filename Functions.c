#include<stdio.h>

int main() {
    void my_function();
    void function_with(int param);
    int function_returning();
    int x = 0;

    my_function();
    function_with(100);
    x = function_returning();

    printf("x: %d\n", x);

    return 0;
}

void my_function() {
    printf("This is my_function\n");
}

void function_with(int param) {
    printf("param: %d\n", param);
}

int function_returning() {
    int a = 100;
    return a;
}
