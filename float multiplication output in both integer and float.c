#include <stdio.h>

int main() {
    float a, b, c;

    
    printf("Enter first float number: ");
    scanf("%f", &a);

    printf("Enter second float number: ");
    scanf("%f", &b);

    
    c=a*b;

    
    printf("Product as float: %.2f\n", c);

    printf("Product as integer: %d\n", (int)c);

    return 0;
}

