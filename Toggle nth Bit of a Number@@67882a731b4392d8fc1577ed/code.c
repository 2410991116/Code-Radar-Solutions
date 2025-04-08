#include <stdio.h>

int main() {
    unsigned int num, n;
    scanf("%u", &num);
    scanf("%u", &n);

    // Toggle the nth bit
    unsigned int toggled_num = num ^ (1 << n);

    // Print the result
    printf("%u\n", toggled_num);

    return 0;
}