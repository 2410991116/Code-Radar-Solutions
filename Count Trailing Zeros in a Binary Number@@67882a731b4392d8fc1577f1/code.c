#include <stdio.h>

int main() {
    unsigned int num;
    scanf("%u", &num);

    if (num == 0) {
        return 0;
    }

    int trailing_zeros = 0; // Counter for trailing zeros
    while ((num & 1) == 0) {
        num = num >> 1;
        trailing_zeros++;
    }

    printf("%d\n", trailing_zeros);

    return 0;
}