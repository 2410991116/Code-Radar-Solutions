#include <stdio.h>
#include <string.h>

// Function to compress the string
void compressString(char str[],char compressed) {
    int n = strlen(str);
    char compressed[2 * n]; // To ensure enough space for the compressed string
    int index = 0;          // Index for the compressed string

    for (int i = 0; i < n;) {
        char currentChar = str[i];
        int count = 0;

        // Count occurrences of the current character
        while (i < n && str[i] == currentChar) {
            count++;
            i++;
        }


        compressed[index++] = currentChar;
        index += sprintf(&compressed[index], "%d", count);
    }

    compressed[index] = '\0'; 

    if (strlen(compressed) < n) {
        printf("%s", compressed);
    } else {
        printf("%s", str);
    }
}

