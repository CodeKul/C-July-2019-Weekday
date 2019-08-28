#include<stdio.h>
#include<math.h>

int bin2dec(int bin) {
    int dec = 0, dig = 0, deg = 0;
    while (bin > 0) {
        dig = bin % 10;
        dec = dec + (dig * pow(2, deg));
        deg++;
        bin /= 10;
    }
    return dec;
}

int main() {
    int bin_no = 0, dec_no = 0;
    printf("Enter binary no: ");
    scanf("%d", &bin_no);
    dec_no = bin2dec(bin_no);
    printf("Binary no: %d\tDecimal no: %d\n",bin_no, dec_no);
    return 0;
}