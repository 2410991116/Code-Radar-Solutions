#include <stdio.h>

int main() {
    unsigned int num, n;
    scanf("%u", &num);
    scanf("%u", &n);

    // Create the mask and clear the nth bit
    unsigned int cleared_num = num & ~(1 << n);

    // Print the result
    printf("%u\n",cleared_num);

    return 0;
}