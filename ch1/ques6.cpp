#include <stdio.h>

int main() {
    // Define the initial dimensions for A0 size
    int width = 1189;
    int height = 841;

    // Loop through sizes A0 to A8
    for (int i = 0; i <= 8; i++) {
        // Print the current size dimensions
        printf("A%d: %d mm x %d mm\n", i, width, height);
        
        // Update dimensions for the next size
        int temp = width;
        width = height;
        height = temp / 2;

    }

    return 0;
}