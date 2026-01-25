#include <iostream>
#include <vector>
using namespace std;

int main() {
	freopen("pails.in", "r", stdin);
    int x, y, m;
    cin >> x >> y >> m;
    int closest = 0;
    int n = 0;
    for (int i = 0; i <= m; i++)
    {
        if (x * i > m)
            break;
        for (int j = 0; j <= m; j++){
            int n = (x * i) + (y * j);
            if (n > m) break;
            closest = max(closest, n);
        }
    }
    freopen("pails.out", "w", stdout);
    cout << closest << endl;
}