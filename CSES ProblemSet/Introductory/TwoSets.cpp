#include <iostream>
#include <vector>
#include <numeric>

int main() {
    // Fast I/O
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    long long n;
    std::cin >> n;

    long long total_sum = n * (n + 1) / 2;

    // Check if the total sum is odd. If so, no solution exists.
    if (total_sum % 2 != 0) {
        std::cout << "NO\n";
    } else {
        std::cout << "YES\n";
        long long target_sum = total_sum / 2;
        
        std::vector<int> set1;
        std::vector<int> set2;
        
        // Greedily build the first set from largest to smallest
        for (int i = n; i >= 1; --i) {
            if (target_sum >= i) {
                set1.push_back(i);
                target_sum -= i;
            } else {
                set2.push_back(i);
            }
        }

        // Print the first set
        std::cout << set1.size() << "\n";
        for (size_t i = 0; i < set1.size(); ++i) {
            std::cout << set1[i] << " ";
        }
        std::cout << "\n";

        // Print the second set
        std::cout << set2.size() << "\n";
        for (size_t i = 0; i < set2.size(); ++i) {
            std::cout << set2[i] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}