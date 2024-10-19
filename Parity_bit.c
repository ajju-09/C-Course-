#include <stdio.h>

// Function to calculate parity (1 for odd parity, 0 for even parity)
int calculate_parity(int data[], int size) {
    int parity = 0;
    for (int i = 0; i < size; i++) {
        parity ^= data[i];  // XOR all bits to calculate parity
    }
    return parity;
}

// Function to check for errors using simple parity check
int simple_parity_check(int data[], int size, int received_parity) {
    int calculated_parity = calculate_parity(data, size);
    return (calculated_parity == received_parity);
}

int main() {
    int data[100], size;

    // Taking input from user
    printf("Enter the number of bits in the binary data: ");
    scanf("%d", &size);

    printf("Enter binary data (e.g., 1 0 1 1): ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &data[i]);
    }

    // Sender calculates the parity and sends it with the data
    int parity = calculate_parity(data, size);

    // Simulating receiving the data and parity bit
    int received_data[100];
    for (int i = 0; i < size; i++) {
        received_data[i] = data[i];  // Simulate received data
    }
    int received_parity = parity;  // Simulate received parity bit

    // Check for errors
    if (simple_parity_check(received_data, size, received_parity)) {
        // No error detected
    } else {
        // Error detected
    }

    return 0;
}
