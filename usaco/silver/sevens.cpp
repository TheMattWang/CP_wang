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
using vl = vector<ll>;
ll dp[1000001];
ifstream fin;
ofstream fout;

void solve(){
    
}

/*
Thoughts:
First we can just iterate through this entire thing and find the largest diff
*/
int main() {
    fin.open("div7.in");
    fout.open("div7.out");
    vl cows;
    cows.push_back(0);
    int T = 1;
    fin >> T;
    while(T--){
        ll temp;
        fin >> temp;
        cows.push_back(cows.back()+temp);
    }
    ll n = cows.size();
    int diff = -1;
    for(int i =0; i < n; i++) {
        for(int j = i; j < n;j++) {
            if(((cows[j]-cows[i]) % 7 ) == 0) {
                diff = max(j-i,diff);
            }
        }
    }
    fout << diff << endl;
    return 0;
}
