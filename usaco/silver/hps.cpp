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
ifstream fin;
ofstream fout;
void solve(){
    
}

int main() {
    freopen("hps.in", "r", stdin);
    freopen("hps.out", "w", stdout);
    cout << "Apples" << endl;
    vi hoof = {0};
    vi paper= {0};
    vi scissors={0};
    int T = 1;
    cin >> T;
    while(T--){
        string temp;
        cin >> temp;
        if(temp == "H") {
            hoof.push_back(hoof.back() + 1);
            paper.push_back(paper.back());
            scissors.push_back(scissors.back());
        } if(temp == "P") {
            hoof.push_back(hoof.back());
            paper.push_back(paper.back() + 1);
            scissors.push_back(scissors.back());
        } else {
            hoof.push_back(hoof.back());
            paper.push_back(paper.back());
            scissors.push_back(scissors.back() + 1);
        }
    }
    ll n = hoof.size();
    ll ret = -1;
    for(int i =0 ; i < n; i++) {
        ll hoof_split = hoof.back() - hoof[i];
        ll paper_split = paper.back() - paper[i];
        ll sci_split = scissors.back() - scissors[i];
        
        ll before = max({paper[i],scissors[i],hoof[i]});
        ll after = max({paper[n]-paper[i],scissors[n]-scissors[i],hoof[n]-hoof[i]});
        
        
        ret = max(ret,before + after);
    }
    cout << ret << endl;

    return 0;
}
