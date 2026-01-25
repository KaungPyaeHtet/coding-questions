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

// Longest Increasing Subsequence

void solve() {
    int seq[8] = {6, 2, 5, 1, 7, 4, 8, 3};
    int n = 8;
    vector<int> length(n + 1);
    
    for (int k=0; k<n; k++){
        length[k] = 1;
        for (int i=0; i<k; i++){
            if (seq[i] < seq[k]){
                length[k] = max(length[k], length[i] + 1);
            }
        }
    }

    for (int i=0; i<n; i++){
        cout << i << ": " << length[i] << " \n";
    }

}

int main() {
   solve(); return 0;
}