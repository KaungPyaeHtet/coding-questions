#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
typedef __int128 ell;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef map<int, int> mi;

void solve() {
   int n, k;
   cin >> n >> k;
   int arr[n + 1];
   bool is_sorted = true;
   cin >> arr[0];
    for (int i=1; i<n; i++){
        cin >> arr[i];
        if (arr[i] < arr[i - 1]){
            is_sorted = false;
        }
    }
    if (k >= 2 or is_sorted){
        cout << "YES\n";
        return;
    }
    cout << "NO\n";
}

int main() {
   int t;
   cin >> t;
   while (t--){
    solve();
   }
}