#include<bits/stdc++.h>
 
using ll = long long;
using ld = long double;
using namespace std;
#define endl "\n";
#define ff first
#define ss second
 
int mod = 1e9 + 7;
int n,x;
ll arr[1000001];
void solve(vector<ll>& coins,ll x){
    for(ll i =0; i <= x; i++){
        for(int j=0; j < coins.size();j++){
            if(i - coins[j] >=0){
                arr[i] += arr[i -coins[j]];
                arr[i] %= mod;
            }
        }
    }
}
 
int main() {
    //int T = 1;

    cin >> n >>x;
    vector <ll> coins(n);
    //arr.resize(x+1,0);
    arr[0]=1;
    for(int i = 0;i < n;i++){
        
        cin >> coins[i];
    }
    solve(coins,x);
    // for(auto j: arr) {
    //     cout << "Item: " << j << endl;
    // }
    cout << arr[x] << endl;
    return 0;
}