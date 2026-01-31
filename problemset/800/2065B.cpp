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
//https://codeforces.com/contest/2065/problem/A
using namespace std;

void solve() {
    string s; cin >> s;
    
    for (int i=0; i+1 < s.size(); i++){
        if(s[i] == s[i+1]){
            cout << 1 << endl;
            return;
        }
    }
    cout << s.length()<<"\n";
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