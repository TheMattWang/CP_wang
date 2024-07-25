#include<bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;
#define endl "\n";
#define ff first
#define ss second


ll n,x;
vector<int> coins;
vector<int> glob;

void solve(){
    for(int i = 0; i < glob.size(); i++) {
        for(auto j: coins){
            if(i - j < 0){
                //cout << "J: " << j << " INDEX: " << i << " PATH A " << endl;
                continue;
            }
            if(glob[i-j] == -1){
                //cout << "J: " << j << " INDEX: " << i << " PATH B " << endl;

                continue;
            }
            if(glob[i] == -1){
                //cout << "J: " << j << " INDEX: " << i << " PATH C " << endl;

                glob[i] = glob[i-j] + 1;
            } else {
                //cout << "J: " << j << " INDEX: " << i << " PATH D " << endl;

                glob[i] = min(glob[i],glob[i-j] + 1);
            }
            
        }
    }
}

int main() {
    cin >> n >> x;
    for(int i =0; i < n;i++) {
        int coin;
        cin >> coin;
        coins.push_back(coin);
    }
    glob.resize(x+1,-1);
    glob[0] = 0;
    for(auto j : coins){
        if(j > x) {
            continue;
        }
        glob[j] = 1;
    }
    solve();
    // for(auto p: glob) {
    //     cout << "Coins: " << p << endl;
    // }
    cout << glob[x] << endl;
    return 0;
}
