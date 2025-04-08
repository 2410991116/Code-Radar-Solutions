#include <stdio.h>

int main() {
    unsigned int num, n;
    scanf("%u", &num);
    scanf("%u", &n);

    // Calculate the nth bit value
    unsigned int bit_value = (num >> n) & 1;

    // Print the result
    printf("%u\n",  bit_value);

    return 0;
}