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
   int n;
   string s;
   cin >> n >> s;
   if (n < 3){
    cout << "No";
    return;
   }
    cout << (s.substr(s.size() - 3) == "tea" ? "Yes" : "No") ;

}

int main() {
   solve();
}