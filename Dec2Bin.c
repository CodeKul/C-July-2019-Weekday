#include<stdio.h>

int dec2bin(int dec) {
    int bin = 0, dig = 0, mul = 1;
    while (dec > 0) {
        dig = dec % 2;
        bin = dig * mul + bin;
        mul *= 10;
        dec /= 2;
    }
    return bin;
}

int main() {
    int dec_no = 0, bin_no = 0;

    printf("Enter a Decimal no: ");
    scanf("%d", &dec_no);

    bin_no = dec2bin(dec_no);
    printf("Decimal no: %d\tBinary no: %d\n", dec_no, bin_no);

    return 0;
}