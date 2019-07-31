#include<stdio.h>

int main() {

    int no = 0, i = 1;

    printf("Enter no: ");
    scanf("%d", &no);

    while (i <= 10) {

        printf("%d\n", no * i);
        i++;
    }

    return 0;
}