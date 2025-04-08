#include <stdio.h>

int main() {
    unsigned int num, n;
    scanf("%u", &num);
    scanf("%u", &n);

    unsigned int bit_value = (num >> n) & 1;
    printf("%u\n", n, bit_value);

    return 0;
}