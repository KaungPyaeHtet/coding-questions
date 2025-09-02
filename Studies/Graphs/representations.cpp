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

// For edge list
struct Edge {
    int u, v, w;
};


void solve() {
    // unweighted graph
//     const int N = 1e5+5;
//    vi adj[N];
//    adj[0].push_back(1);
//    adj[1].push_back(2);
//    adj[2].push_back(0);
//    adj[2].push_back(1);
//    for (int i=0; i<3; i++){
//     cout << i << ": ";
//     for (auto v: adj[i]){
//         cout << v << " ";
//     }
//     cout << "\n";
//    }
   // weighted graph
//     const int N = 1e5+5;
//    vector<pair<int, int>> adj[N];
//    adj[0].push_back({1, 3});
//    adj[1].push_back({2, 5});
//    adj[2].push_back({0, 5});
//    for (int i=0; i<3; i++){
//     cout << i << ": ";
//     for (auto c: adj[i]){
//         cout << c.first << " " << c.second << " ";
//     }
//     cout << "\n";
//    }
    // Adjacency Matrix
    // int adj[5][5] = {0};
    // adj[1][2] = 5;
    // adj[2][3] = 7;
    // adj[2][4] = 6;
    // adj[3][4] = 5;
    // adj[4][1] = 2;
    // for (int i = 1; i <= 4; i++) {
    //     for (int j = 1; j <= 4; j++) {
    //         cout << adj[i][j] << " ";
    //     }
    //     cout << "\n";
    // }
    // Edge List
    vector<Edge> edges;
    edges.push_back({1,2,5});
    edges.push_back({2,3,7});
    edges.push_back({2,4,6});
    edges.push_back({3,4,5});
    edges.push_back({4,1,2});
    for (auto edge: edges){
        cout << edge.u << " " <<  edge.v << " " << edge.w << "\n";
    }
}

int main() {
   solve();
}