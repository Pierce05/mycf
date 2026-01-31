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
//https://codeforces.com/contest/2104/problem/A
void solve() {
    int a, b, c, sum;
    cin >> a >> b >> c;

    sum = a+b+c;
    
   if(sum % 3 != 0 ){
    cout << "NO\n";
    return;
   }
   long long k=sum/3;

   if(k < b){   //as a and b can only increase
    cout << "NO\n";
    return;
   }
   cout << "YES\n";
   
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