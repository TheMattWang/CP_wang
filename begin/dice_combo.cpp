#include<bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;
#define endl "\n";
#define ff first
#define ss second

vector <ll> glob;
ll mod = 1e9 + 7;

void solve(int T){
    for(int j = 1; j < T; j++) {
        for(int i =0; i < 6 && j-i > 0; i++) {
            glob[j] += glob[j - i - 1] % mod;
        }
    }
}

int main() {
    int T = 1;
    cin >> T;
    
    glob.resize(T+1);
    glob[0] = 1;
    //cout << "Before Solve" << endl;
    solve(T+1);
    cout << glob[T] % mod << endl;
    // for(auto j: glob){
    //     cout << "Item: " << j << endl;
    // }
    return 0;
}
