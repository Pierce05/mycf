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

struct TrieNode{
    int next[26];
    TrieNode(){
        for (int i=0; i<26; i++)
        next[i] = -1;
    }
};

void solve() {
    string s;
    cin >> s;
    int n= s.size();
    string good; cin >> good;
    int k; cin >> k;

    // mark bad letters
    vector<int> isBad(26);
    for(int i=0; i<26; i++){
        isBad[i] = (good[i] == '0'); //when good[i] = either '1'or'0' so good or bad    }
    }
    vector<TrieNode> trie;
    trie.push_back(TrieNode());

    int ans=0;
    for (int i=0; i<n; i++){
        int cur=0;  //start from root
        int badCount=0; 

        for (int j=i; j<n; j++){
            int c = s[j] - 'a'; //convert characters to numbers, 'a'=97, 'b'=98, 'c'=99
            if (isBad[c]) badCount++; 
            /* 'a' - 'a' = 0
               'b' - 'a' = 1
               'c' - 'a' = 2
                ...
               'z' - 'a' = 25

               isBad[0] → for 'a'
               isBad[1] → for 'b'
                ...
               isBad[25] → for 'z'
               Arrays only work with numbers, not characters.
               So we convert the character into an index.
               Because:
               c tells us which letter
               isBad[c] tells us if that letter is bad
            */
           if (badCount > k) break;
           if (trie[cur].next[c] == -1) {  //path doesn't exist rn
               trie[cur].next[c] = trie.size();  //link to new node
               trie.push_back(TrieNode());   //create new node
               ans++;
            }
            cur = trie[cur].next[c];  //move fwd in trie s[i...j]
        }
    }
     cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

        solve();
    return 0;
}
