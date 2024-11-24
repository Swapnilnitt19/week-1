#include <stdio.h>

int main() {
    int days;
    int years, leftdays ;

    printf("Enter the number of days: ");
    scanf("%d", &days);

    years = days / 365;

    
    leftdays = days % 365;


    printf("%d days is approximately %d years and %d days.\n", days, years, leftdays );

    return 0;
}

