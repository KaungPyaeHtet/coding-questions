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
ll mod = 1e9 + 7;
void solve() {
    ll n;
    ll m;
    cin >> n;
    cin >> m;
   vll d(n + 1, 0);
   d[0] = 1;
   if (n > 0) {d[1] = 0;}

   for (int i=2; i<=n; i++){
    d[i] = ((1LL) * (i - 1) * (d[i - 1] + d[i - 2])) % m;
   }
   for (int i=1; i<=n; i++){
    cout << d[i] << " ";
   }
}

int main() {
   solve();
}