#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    long long k;
    cin >> n >> k;
    vector<long long> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    for (auto v: a){
        long long rem = v % (k + 1);
        long long res = v + (rem * k);
        cout << res << " ";
    }
    cout << "\n";

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) solve();
}
