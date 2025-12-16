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

long long ans = __LONG_LONG_MAX__;
int n;
int a[21];
void solve(long long i, long long X, long long Y)
{
    if (i == n){
        ans = min(ans, abs(X - Y));
        return;
    }

    solve(i + 1, X + a[i], Y);
    solve(i + 1, X, Y + a[i]);
}

int main() {
    
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    solve(0, 0, 0);
    cout << ans;
}