#include <stdio.h>

int main(){

    long long binary, temporary;
    int decimal = 0, remainder, base = 1;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    temporary = binary;
    while (temporary > 0) {
        remainder = temporary % 10;
        decimal = decimal + remainder * base;
        base = base * 2;
        temporary /= 10;
    }

    printf("Decimal equivalent of %lld is: %d\n", binary, decimal);

    return 0;
}
