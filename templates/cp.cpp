#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <unordered_map>
#include <unordered_set>
#include <numeric>

using namespace std;

vconst long long MOD = 1e9 + 7;

long long modpow(long long base, long long exp) {
    long long res = 1 % MOD;
    base %= MOD;
    while (exp) {
        if (exp & 1) res = res * base % MOD;
        base = base * base % MOD;
        exp >>= 1;
    }
    return res;
}

void solve() {
    long long a, b, x, c, f;
    cin >> a >> b >> x >> c >> f;

    long long total = b - a + 1;

    long long L = max(a, x - c);
    long long R = min(b, x + c);

    long long bad = 0;
    if (L <= R) bad = R - L + 1;

    long long good = total - bad;

    if (good <= 0) {
        cout << 0 << '\n';
        return;
    }

    cout << modpow(good, f) << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        solve();
    }
 
    return 0;
}
