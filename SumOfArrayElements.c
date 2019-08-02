#include<stdio.h>

int main() {

    int data[10] = {3,67,23,89,34,89,24,67,24,56};
    int i = 0, sum = 0, odd_sum = 0, even_sum = 0;

    while (i < 10) {

        if (data[i] % 2 == 0) {
            even_sum += data[i];
        }
        else {
            odd_sum += data[i];
        }
        sum += data[i];
        i++;
    }

    printf("Sum of all the elements: %d\n", sum);
    printf("Sum of even elements: %d\n", even_sum);
    printf("Sum of odd elements: %d\n", odd_sum);

    return 0;
}