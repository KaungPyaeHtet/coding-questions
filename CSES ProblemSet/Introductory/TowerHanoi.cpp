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

vector<pair<int, int>> moves;
void solve(int n, int from, int to)
{
    if (n == 0){
        return;
    }
    int other = 6 - from - to;

    solve(n - 1, from, other);
    moves.emplace_back(from, to);
    solve(n - 1, other, to);
}

int main() {
    int n;
    cin >> n;
    solve(n, 1, 3);
    cout << moves.size() << "\n";
    for (auto [a, b]: moves){
        cout << a << " " << b << "\n";
    }
}