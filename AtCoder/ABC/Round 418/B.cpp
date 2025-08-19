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
    string s; cin >> s;
    int x = 0, n = s.size();
    double ans = 0;
    for (int i = 0; i < n; i++)
    for (int j = i + 1; j < n; j++)
    if (s[i] == 't' && s[j] == 't') {
    int x = 0, len = j - i + 1;
    for (int k = i; k <= j; k++)
    x += (s[k] == 't');
    ans = max(ans, (x - 2.0) / (len - 2.0));
    }
    cout << fixed << setprecision(12) << ans;
}

int main() {
   solve();
}