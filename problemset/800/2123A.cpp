#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <unordered_map>
#include <unordered_set>
#include <numeric>

using namespace std;
//https://codeforces.com/contest/2123/problem/A
void solve() {
    int n; cin >> n;
    if (n%4 == 0 ){
        cout << "BOB\n";
    }
    else cout << "ALICE\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}