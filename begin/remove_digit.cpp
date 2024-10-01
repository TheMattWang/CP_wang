#include<bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;
#define endl "\n";
#define ff first
#define ss second
#define max 1e9

ll mod = 1e9 + 7;
ll n,x;
using vi = vector<int>;
ll dp[1000001];
int solve(int t){
    vi array(t,max);
    array[0] = 0;
    for(int j =1; j < t; j++) {
        int digit = t;
        while(digit){
            int digit_curr = digit %10;
            array[j] = min(array[j],1+array[j-digit]);     
            digit = floor(digit/10);
        }
        
    }
    for(auto p:array) {
        cout << p << endl;
    }
    return array[t-1];
}

int main() {
    int T = 1;
    cin >> T;
    cout << "Apple";
    cout << "Orange"; 
    cout << solve(T) << endl;
    
    return 0;
}
