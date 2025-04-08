#include <stdio.h>

int main() {
    unsigned int num;
    scanf("%u", &num);

    int leading_zeros = 0; // Counter for leading zeros

    for (int i = 31; i >= 0; i--) {
        if ((num >> i) & 1) {
            break; // Stop when the first 1 is encountered
        }
        leading_zeros++;
    }

    printf("%d\n", leading_zeros);

    return 0;
}