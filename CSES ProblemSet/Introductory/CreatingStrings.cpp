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
    sort(s.begin(), s.end());
    vector<string> ans;

    do{
        ans.emplace_back(s);
    } while (next_permutation(s.begin(), s.end()));
    cout << ans.size() << "\n";
    for (string a: ans){
        cout << a << "\n";
    }
}

int main() {
    solve();
}