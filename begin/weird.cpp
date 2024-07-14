#include<bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;
#define endl "\n";
#define ff first
#define ss second

void solve(ll n){
    while(true) {
        cout << n << " ";
        if(n == 1) {
            break;
        }
        if(n % 2 == 0) {
            n = n / 2;
        } else {
                n = n * 3  + 1;
            
        }
    }
}

int main() {
    ll n = 1;
    cin >> n;
    solve(n);
    return 0;
}
