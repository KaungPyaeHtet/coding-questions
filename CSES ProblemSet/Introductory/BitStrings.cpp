#include <iostream>

using namespace std;

long long power(long long base, long long exp) {
    long long res = 1;
    long long MOD = 1e9 + 7;
    base %= MOD; // Ensure base is within the modulo range
    while (exp > 0) {
        if (exp % 2 == 1) {
            res = (res * base) % MOD;
        }
        base = (base * base) % MOD;
        exp /= 2;
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    cout << power(2, n) << endl;
    return 0;
}