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
   string s;
   cin >> s;
   string t = "hello";
   int idx = 0;
   for (auto &c: s){
        if (c == t[idx]){
            if (idx == 5){
                break;
            }
            idx ++;
        }
   }
   cout << (idx == 5 ? "YES" : "NO");
}

int main() {
   solve();
}