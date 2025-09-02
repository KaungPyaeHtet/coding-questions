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
   int x, y;
   cin >> x >> y;
   cout << ((x + y) % 12 ? (x + y) % 12 : 12);
}

int main() {
   solve();

}