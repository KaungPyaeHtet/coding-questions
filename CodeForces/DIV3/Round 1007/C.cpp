#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <map>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <vector>
#include <stack>

using namespace std;

void solve() {
    int n, s, e;
    cin >> n >> s >> e;
    vector adj(n + 1, vector<int> ());
    for (int i = 1; i < n; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v), adj[v].push_back(u);
    }
    vector dis(n + 1, vector<int> ());
    vector<int> d(n + 1);
    auto dfs = [&](auto &&self, int v, int par) -> void {
        d[v] = d[par] + 1;
        dis[d[v]].push_back(v);
        for (int u: adj[v]) {
            if (u == par) continue;
            self(self, u, v);
        }
    };
    dfs(dfs, e, 0);
    for (int i = n; i >= 1; i--) {
        for (int j: dis[i]) {
            cout << j << " ";
        }
    }
    cout << "\n";
}
int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        solve();
    }
}