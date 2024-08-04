#include<bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;
#define endl "\n";
#define ff first
#define ss second

ll mod = 1e9 + 7;
ll n,x;
using vi = vector<int>;
ll dp[10001][10001];

void solve(string word1, string word2){
    for(int i = 0; i < word1.length(); i++){
        for(int j = 0; j < word2.length(); j++){
            if(i == 0){
                dp[i][j] = j;
            } else if(j == 0) {
                dp[i][j] = i; 
            }
            else if(word1[i-1] != word2[j-1]) {
                dp[i][j] = min(dp[i-1][j],dp[i][j-1]);
                dp[i][j] = min(dp[i][j],dp[i-1][j-1]);
                dp[i][j] +=1;
            } else {
                dp[i][j] = dp[i-1][j-1];
            }
        }
    }
}

int main() {
    string word1, word2;
    cin >> word1 >> word2;
    // ll longest = max(word1.length(),word2.length());
    // for(int j = 0;j < word1.length();j++) {
    //     dp[j][0] = 0;
    // }

    // for(int i = 0; i < word2.length(); i++) {
    //     dp[0][i] = 0;
    // }
    solve(word1,word2);
    cout << dp[word1.length()][word2.length()] << endl;
}
