#include<stdio.h>

float diameter(float rad) {

    float d = rad * 2;
    return d;
}

float circumference(float rad) {

    float c = 2 * 3.14 * rad;
    return c;
}

float area(float rad) {
    float a = 3.14 * rad * rad;
    return a;
}

int main() {
    float rad = 0;

    printf("Enter raious of circle: ");
    scanf("%f", &rad);

    printf("Diameter: %f\n", diameter(rad));
    printf("Circumference: %f\n", circumference(rad));
    printf("Area: %f\n", area(rad));

    return 0;
}