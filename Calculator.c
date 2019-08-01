#include<stdio.h>

int main() {

    int addition(int a, int b);
    int subtraction(int a, int b);
    int multiplication(int a, int b);
    int division(int a, int b);
    int x, y, opt, res;

    while (1) {
        printf("Enter value of x: ");
        scanf("%d", &x);

        printf("Enter value of y: ");
        scanf("%d", &y);

        printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n0. Exit\nEnter option: ");
        scanf("%d", &opt);

        if (opt == 0) {
            printf("Bye!");
            break;
        }

        if (opt == 1) {
            res = addition(x, y);
        }
        else if (opt == 2) {
            res = subtraction(x, y);
        }
        else if (opt == 3) {
            res = multiplication(x, y);
        }
        else if (opt == 4) {
            res = division(x, y);
        }
        printf("Result: %d\n", res);
    }
    return 0;
}


int addition(int a, int b) {
    int res = 0;
    res = a + b;
    return res;
}

int subtraction(int a, int b) {
    int res = 0;
    res = a - b;
    return res;
}

int multiplication(int a, int b) {
    int res = 0;
    res = a * b;
    return res;
}

int division(int a, int b) {
    int res = 0;
    res = a / b;
    return res;
}