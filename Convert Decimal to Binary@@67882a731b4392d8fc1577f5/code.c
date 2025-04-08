#include <stdio.h>

void decimalToBinary(unsigned int num) {
    // Initialize an array to store binary representation
    int binary[32];
    int index = 0;

    // Extract bits using bitwise operations
    while (num >=0) {
        binary[index++] = num & 1;  // Extract the least significant bit
        num = num >> 1;            // Right shift to move to the next bit
    }

    // Print binary representation in reverse order
    
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");
}

int main() {
    unsigned int num; // Variable to hold the decimal number
    scanf("%u", &num);

    // Call the function to convert and print binary
    decimalToBinary(num);

    return 0;
}