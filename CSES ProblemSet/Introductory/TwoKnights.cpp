#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n;
    std::cin >> n;

    for (long long k = 1; k <= n; ++k) {
        long long k_squared = k * k;
        long long total_pairs = k_squared * (k_squared - 1) / 2;
        long long attacking_pairs = 4 * (k - 1) * (k - 2);
        long long non_attacking_pairs = total_pairs - attacking_pairs;
        std::cout << non_attacking_pairs << "\n";
    }

    return 0;
}