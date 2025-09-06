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
    ll n;
    cin >> n;
    ll cnt = 0;
    for (int i = 5; n / i >= 1; i *= 5){
        cnt += n / i;
    }
    cout << cnt;
}

int main() {
    solve();
}