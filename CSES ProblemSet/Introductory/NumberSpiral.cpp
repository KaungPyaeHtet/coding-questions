#include <iostream>
#include <algorithm>

// Function to solve a single test case
void solve() {
    long long y, x;
    std::cin >> y >> x;

    // check which square are we in
    long long m = std::max(y, x);

    // previous square max is needed as start point
    long long prev_square_max = (m - 1) * (m - 1);

    long long result = 0;

    // m odd or even
    if (m % 2 == 0) {
        if (y == m) { // Bottom row: numbers increase from right to left
            result = prev_square_max + m + (m - x);
        } else { // Rightmost column (x == m): numbers increase from top to bottom
            result = prev_square_max + y;
        }
    } else { // Odd layer
        if (x == m) { // Rightmost column: numbers increase from bottom to top
            result = prev_square_max + m + (m - y);
        } else { // Bottom row (y == m): numbers increase from left to right
            result = prev_square_max + x;
        }
    }

    std::cout << result << "\n";
}

int main() {
    // Optimize C++ standard streams for speed
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}