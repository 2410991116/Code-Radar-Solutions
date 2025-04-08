#include <stdio.h>

int main() {
    unsigned int num, n;
    scanf("%u", &num);
    scanf("%u", &n);

    // Set the nth bit
    unsigned int updated_num = num | (1 << n);

    // Print the result
    printf("%u\n", updated_num);

    return 0;
}