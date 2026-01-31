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
//https://codeforces.com/contest/2096/problem/A
void solve() {
    int n; cin >> n;

    // Edge case
    if (n == 1) {
        cout << 1 << "\n";
        return;
    }
    string s; cin >> s;
    
    int l = 0;   // Count number of '<'
    /* l= no. of times we need a new minimum
       g= no. of times we need a new maximum */
    for (char c : s) if (c == '<') l++;
    int g = n - 1 - l;

    vector<int> ans(n);  // a[0] must be l + 1
    ans[0] = l + 1;

    // Numbers smaller and larger than a[0]
    vector<int> smaller(l), larger(g);
    for (int i = 0; i < l; i++) smaller[i] = i + 1;
    for (int i = 0; i < g; i++) larger[i] = l + 2 + i;

    int sp = l - 1, lp = 0;

    
    for (int i = 1; i < n; i++) {  //permutation
        if (s[i - 1] == '<') {
            ans[i] = smaller[sp--];   // new minima
        } else {
            ans[i] = larger[lp++];    // new maxima
        }
    }

    for (int i = 0; i < n; i++) {
        cout << ans[i] << (i + 1 < n ? ' ' : '\n');
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
