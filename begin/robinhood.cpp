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
int solve(vector<ll>& arr,ll people){
    if(people == 1 || people == 2) {
        return -1;
    }
    sort(arr.begin(),arr.end());
    ll total = 0;
    for(auto x: arr){
        total += x;
    }
    int mid = people/2;
    
}

int main() {
    int T = 1;
    cin >> T;
    while(T--){
        ll people;
        cin >> people;
        ll temp = 0;
        vector<ll> arr(0,people);
        while(temp < people) {
           cin >> arr[temp];
           temp++; 
        }
        solve(arr,people);
    }
    return 0;
}
