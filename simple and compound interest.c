#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, si, ci;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter rate of interest : ");
    scanf("%f", &rate);

    printf("Enter time : ");
    scanf("%f", &time);

    
    si = (principal * rate * time) / 100;


    ci = principal * pow((1 + rate / 100), time) - principal;

    printf("simple interest is : %.2f\n", si);
    printf("compound Interest: %.2f\n", ci);

    return 0;
}

