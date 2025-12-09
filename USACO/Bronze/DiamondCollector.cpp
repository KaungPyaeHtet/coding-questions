#include <iostream>
#include <vector>
using namespace std;

int main() {
	freopen("diamond.in", "r", stdin);
    freopen("diamond.out", "w", stdout);
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int mxs = 0;
    for (int x : a)
    {
        int sub = 0;
        for (int y: a){
            if (x <= y && y <= x + k){
                sub++;
            }
        }
        mxs = max(mxs, sub);
    }
    cout << mxs << endl;
}