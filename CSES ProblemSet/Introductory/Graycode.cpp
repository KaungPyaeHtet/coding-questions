#include <iostream>
#include <vector>
#include <string>
#include <cmath>

// Helper function to convert an integer to its binary string representation
// with a specified number of bits.
std::string toBinary(int n, int numBits) {
    if (n == 0) {
        return std::string(numBits, '0');
    }
    std::string binaryString = "";
    while (n > 0) {
        binaryString += (n % 2 == 0 ? "0" : "1");
        n /= 2;
    }
    // Pad with leading zeros to meet the required length
    while (binaryString.length() < numBits) {
        binaryString += "0";
    }
    return binaryString;
}

void solve() {
    int n;
    std::cin >> n;

    // The total number of Gray code strings is 2^n.
    // We can use bit shift to calculate this efficiently.
    int limit = 1 << n;

    // Loop through all numbers from 0 to 2^n - 1
    for (int i = 0; i < limit; ++i) {
        // Calculate the Gray code using the bitwise XOR formula.
        // g = i ^ (i >> 1)
        int grayCode = i ^ (i >> 1);

        // Convert the calculated Gray code integer to a binary string
        // of length n and print it.
        std::cout << toBinary(grayCode, n) << std::endl;
    }
}

int main() {
    solve();
    return 0;
}
