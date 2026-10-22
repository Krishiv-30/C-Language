#include <stdio.h>

int main(){

    int decimal, temporary, remainder;
    long long binary = 0;
    long long place = 1;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    temporary = decimal;
    while (temporary > 0) {
        remainder = temporary % 2;
        binary = binary + (remainder * place);
        place *= 10;
        temporary /= 2;
    }

    printf("Binary equivalent of %d is: %lld\n", decimal, binary);

    return 0;
}
