/*
 * Ha Ha Ha Ha Ha Ha Ha Ha Ha Ha
 * Ha      written by Ozzy    Ha
 * Ha Ha Ha Ha Ha Ha Ha Ha Ha Ha
 */
 
#define FAST_EXECUTION
#define INTERACTIVE_MODE
 
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
 
const long long INF = 9223372036854775807;
const long long MOD = 1e9 + 7;
 
#ifndef ONLINE_JUDGE
#define WATCH(key, val)                                                        \
printf("Watched %s ->  %s \n", key, std::to_string(val).c_str());
#define WATCH_CONTAINER(key, val)                                              \
printf("Watched %s : ", key);                                                \
for (auto e : val)                                                           \
  printf(" %s", std::to_string(e).c_str());                                  \
printf("\n");
#define WATCH_MAP(map)                                                         \
printf("Watching Map\n");                                                    \
for (auto e : map)                                                           \
  printf("%s -> %s\n", std::to_string(e.first).c_str(),                      \
        std::to_string(e.second).c_str());                                  \
printf("\n");
#else
#define WATCH(key, val)                                                        \
do {                                                                         \
} while (false);
#define WATCH_CONTAINER(key, val)                                              \
do {                                                                         \
} while (false);
#define WATCH_MAP(map)                                                         \
do {                                                                         \
} while (false);
#endif
 
#ifdef FAST_EXECUTION
#pragma GCC optimize("O3")
#pragma comment(linker, "/stack:247474112")
#endif
 
#define REP(n) for(int t=0; t<n; t++)
#define FOR(i, n) for (i = 0; i < n; i++)
#define FFOR(i, j, n) for(i = j; j < n; j++)
#define FOR_S(i, n, k) for (i = 0; i < n; i += k)
#define RFOR(i, n) for (i = n - 1; i >= 0; i--)
#define RFOR_S(i, n, k) for (i = n - 1; i >= 0; i -= k)
#define MAX_OF(x, y) ((x > y) ? x : y)
#define MIN_OF(x, y) ((x > y) ? y : x)
#define MIN_IN(A) *(std::min_element(A.begin(), A.end()));
#define MAX_IN(A) *(std::max_element(A.begin(), A.end()));
#define MAX_AT(A) (std::max_element(A.begin(), A.end()) - A.begin());
#define MIN_AT(A) (std::min_element(A.begin(), A.end()) - A.begin());
#define TESTCASE                                                              \
int testcase;                                                               \
std::cin>>testcase;                                                         \
while(testcase--)
#define GCD(a,b) std::__gcd(a,b);
#define LCM(a,b) (a)*((b)/std::__gcd(a,b));
#define SORT(A) std::sort(A.begin(), A.end());
#define RSORT(A) std::sort(A.rbegin(), A.rend());
#define REVERSE(A) std::reverse(A.begin(), A.end());
#define ANY(container, result, condition)                                      \
result = false;                                                              \
for (const auto &e : container)                                              \
  if (condition(e)) {                                                        \
    result = true;                                                           \
    break;                                                                   \
  }
#define ALL(container, result, condition)                                      \
result = true;                                                               \
for (const auto &e : container)                                              \
  if (!condition(e)) {                                                       \
    result = false;                                                          \
    break;                                                                   \
  }
#ifdef INTERACTIVE_MODE
#define iprint(...)                                                            \
printf(__VA_ARGS__);                                                         \
fflush(stdout);
#else
#define iprint(...) printf(__VA_ARGS__);
#endif
 
#define LL long long
#define L long
#define ULL unsigned long long
#define I int
#define D double
#define UI unsigned int
#define VEC(i) std::vector<i>
#define MAP(a, b) std::map<a, b>
#define UMAP(a, b) std::unordered_map<a, b>
#define SET(a) std::set<a>
#define USET(a) std::unordered_set<a>
#define MSET(a) std::multiset<a>
#define STR std::string
#define PAIR(a,b) std::pair<a,b>
#define PAIRI std::pair<int, int>
#define READ_INT(var) scanf("%d", &var)
#define READ_STR(var) std::cin >> var
#define READ_LONG(var) scanf("%lld", &var)
#define WRITE_INT(var) printf("%d", var)
#define WRITE_LONG(var) printf("%lld", var)
#define WRITE_STR(var) std::cout << var
#define WRITE_VEC_LL(val)                                                      \
for (auto e : val)                                                           \
  printf("%lld ", e);
#define WRITE_VEC_I(val)                                                       \
for (auto e : val)                                                           \
  printf("%d ", e);
  
#define pb push_back
#define eb emplace_back
 
using namespace std;
LL power(LL x, ULL y) {
// returns  x^y % p
LL res = 1;
x = x % MOD;
while (y > 0) {
    if (y & 1)
        res = (res*x) % MOD;
    y = y>>1;
    x = (x*x) % MOD;
}
return res;
}
using ll = long long;
 
bool isPerfectSquare(long long x) {
    long long root = sqrt(x);
    return root * root == x;
}
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    int solution = 1;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++) {
        solution += max(0, a[i] - b[i]);
    }
    cout << solution << "\n";
}
 
int gcd(int a, int b){
    if (b == 0) return a;
    return (gcd(b, a % b));
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--){
        solve();
    }
}