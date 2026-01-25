#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<string> a(n); // Correct size: n rows
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> cnt(n, 0); // Correct size: n rows, initialized to 0

    // Iterate over columns
    for (int j = 0; j < m; j++) {
        int oc = 0; // count of '1's
        int zc = 0; // count of '0's
        
        // Count '0's and '1's in the current column
        for (int i = 0; i < n; i++) {
            if (a[i][j] == '0') {
                zc++;
            } else {
                oc++;
            }
        }

        char majority = (zc >= oc) ? '0' : '1';

        // Increment mismatch count for rows that don't match the majority
        for (int i = 0; i < n; i++) {
            if (a[i][j] != majority) {
                cnt[i]++;
            }
        }
    }

    // Print results for each row
    for (int i = 0; i < n; i++) {
        cout << "Row " << i + 1 << ": " << cnt[i] << "\n";
    }
}

int main() {
   solve();
   return 0;
}