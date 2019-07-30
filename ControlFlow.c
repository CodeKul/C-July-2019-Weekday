#include<stdio.h>

int main() {

    int a = 20;
    int b = 20;
    int i = 0;
    int sum = 0;
    int opt = 0;

    // conditional statements
    /*
        if (condition) {
            true statements;
        }
        else {
            false statements;
        }
        
        
        if (another condition) {

        }
        else {
            false statements;
        }
    */

    if (a < b) {
        printf("a is less than b\n");
    }
    else if (a == b) {
        printf("a and b are equal\n");
        if (a == 20) {
            printf("a is equal to 20\n");
        }
        else {
            printf("a is not equal to 20\n");
        }
    }
    else {
        printf("a is greater than b\n");
    }

    // Loops

    /*
        initialisation;
        while (condition) {
            statements;
            incr/decr;
        }
     */

    // i = 0;
    // while (i < 10) {
    //     printf("Codekul - %d\n", i);
    //     i++;
    // }

    /*
        initialisation;
        do {
            statements;
            incr/decr;
        }while(condition);
     */

    // i = 0;
    // do
    // {
    //     printf("Codekul - %d\n", i);
    //     i++;
    // } while (i < 10);
    
    /*
        for(initialisation; condition; incr/decr) {
            statements;
        }
     */

    for (i = 0; i < 10; i++) {
        printf("Codekul - %d\n", i);
    }
    
    // switch case

    /*
        switch (option) {
            case op1:
                statements;
                break;
            case op2:
                statements;
                break;
            defalut:
                statements;
        }
     */

    opt = 7;
    switch (opt) {
        case 1:
            printf("One\n");
            break;
        case 2:
            printf("Two\n");
            break;
        case 3:
            printf("Three\n");
            break;
        case 4:
            printf("Four\n");
            break;
        case 5:
            printf("Five\n");
            break;
        case 6:
            printf("Six\n");
            break;
        case 7:
            printf("Seven\n");
            break;
        case 8:
            printf("Eight\n");
            break;
        case 9:
            printf("Nine\n");
            break;
        default:
            printf("Zero\n");
            break;
    }

    return 0;
}