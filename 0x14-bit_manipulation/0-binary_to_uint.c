#include "main.h"

unsigned int binary_to_uint(const char *b) {
    // Check if the input pointer is NULL
    if (b == NULL) {
        printf("Input pointer is NULL.\n");
        return 0;
    }

    unsigned int result = 0;

    // Iterate through the characters in the binary string
    for (int i = 0; b[i] != '\0'; i++) {
        // Check if the current character is '0' or '1'
        if (b[i] == '0') {
            // Shift the current result left by 1 position
            result <<= 1;
        } else if (b[i] == '1') {
            // Shift the current result left by 1 position and set the rightmost bit to 1
            result = (result << 1) | 1;
        } else {
            // If the character is not '0' or '1', it's an invalid binary representation
            printf("Invalid binary representation.\n");
            return 0;
        }
    }

    return result;
}

int main() {
    const char *binary_string = "101010";
    unsigned int unsigned_integer = binary_to_uint(binary_string);
    printf("%u\n", unsigned_integer); // Output: 42

    return 0;
}

