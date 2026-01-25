// Links to learning resources

#include <bits/stdc++.h>
using namespace std;

struct segtree{
    int size;
    vector<long long> sums;

    void init (int n){
        size = 1;
        while (size < n){
            size *= n;
            sums.assign(2 * size, 0LL);
        }
    }
}