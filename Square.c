#include<stdio.h>

int main() {

    int no = 0, sq = 0;

    printf("Enter a number: ");
    scanf("%d", &no);

    sq = no * no;

    printf("Square of %d is %d\n", no, sq);

    return 0;
}