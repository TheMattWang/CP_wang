/*
I had a little bit of difficulty finding the permutation way but the look back method of 
the previous worked
*/

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
ll dp[1000001];
vi coins;
void solve() {
    for(int i = 1;i <=n;i++){
        for(int j =0; j <= x;j++){
            if(j - coins[i-1] >=0){
                dp[j] += dp[j-coins[i-1]];
                dp[j] %= mod;
            }
        }
    }
}

int main() {
    cin >> n >> x;
    coins.resize(n);
    for(int i =0; i < n; i++) {
        cin >> coins[i];
    //    dp[coins[i]] = 1;
    }
    dp[0] =1;
    solve();
    //cout << "Index: " << x -1 << " " << dp[x-1] << endl;
    cout << dp[x] << endl;
    return 0;
}
