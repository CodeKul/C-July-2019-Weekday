#include<stdio.h>

int main() {

    /* 
        Assignment
        =
    */

    int a = 10;
    int b = 20;
    int res = 0;

    /*
        Arithmetic

        +
        -
        *
        /
        %
     */

    res = a % b;

    /*
        Compound Assignment

        +=
        -=
        *=
        /=
        %=
     */

    a += b; // a = a + b

    /*
        Incr / Decr
        a++     post incr
        ++a     pre incr

        a--     post decr
        --a     pre decr
     */

    printf("a++: %d\n", a++);
    printf("++a: %d\n", ++a);

    printf("a--: %d\n", a--);
    printf("--a: %d\n", --a);

    /*
        Comparision
        <
        >
        <=
        >=
        ==
        !=
     */
    b = 30;

    res = a == b;


    /*
        Logical Operators

        &&
        ||
        !

        p   q   &&  ||  !p
        0   0   0   0   1
        0   1   0   1   1
        1   0   0   1   0     
        1   1   1   1   0
     */

    res = !(a == 30 && b == 20);

    /*
        Ternary
        var = condition ? true part: false part
     */

    res = a == b ? 100 : 200;

    printf("Result: %d\n", res);

    return 0;
}