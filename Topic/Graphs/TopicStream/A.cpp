// Link: https://codeforces.com/gym/317667/problem/A

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
   int n, t;
   cin >> n >> t;
   int curr = 1;
   int a[n];
   for (int i=0; i<n - 1; i++){
    cin >> a[i];
   }
   do {
    curr = a[curr - 1] + curr;
    if (curr == t){
        cout << "YES\n";
        return;
    }
   }while(curr < n);
   cout << "NO\n";
}

int main() {
   solve();
}