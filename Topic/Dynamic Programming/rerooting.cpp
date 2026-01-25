//
//  rerooting.cpp
//  
//
//  Created by Kaung Pyae Htet on 25/01/2026.
//
// Problem Link: https://www.youtube.com/watch?v=YjpCgxOpsMg


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

const int N = 2e5 + 20;
int n;
vector<pii> g[N];
int dp[N];

void dfs(int v, int par = -1){
    for (pii p: g[v]){
        int u = p.F, w = p.S;
        if (u == par)continue
        dp[0] += w;
        dfs(u, v);
    }
}
int main() {
    cin >> n;
    for (int i=0; i<)
}
