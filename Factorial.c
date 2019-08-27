#include<stdio.h>

// while loop
/*
int get_factorial(int no) {
    int fact = 1;
    while(no > 0) {
        fact *= no;
        no--;
    }
    return fact;
}
*/

// for loop
/*
int get_factorial(int no) {
    int fact = 1;
    for (; no > 0; no--) {
        fact *= no;
    }
    return fact;
}
*/

// recursion

int get_factorial(int no) {
    if (no == 1) {
        return no;
    }
    else {
        return no * get_factorial(no - 1);
    }
}

int main() {
    int no = 0, fact = 0;

    printf("Enter a number: ");
    scanf("%d", &no);

    fact = get_factorial(no);
    printf("Factorial of %d is: %d\n", no, fact);

    return 0;
}