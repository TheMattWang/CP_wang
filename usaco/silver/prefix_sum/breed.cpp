#include <bits/stdc++.h>

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
vi holsteins;
vi guernseys;
vi jerseys;

vector<int> solve(int x, int y){
    x--;
    vector<int> val = {holsteins[y]-holsteins[x] ,guernseys[y] - guernseys[x] , jerseys[y] - jerseys[x] };
    return val;
}

int main() {
    ifstream fin;
    ofstream fout;

    fin.open("bcount.in");
    fout.open("bcount.out");

    int T = 1;
    int n = 1;
    fin >> n >> T;
    holsteins.push_back(0);
    guernseys.push_back(0);
    jerseys.push_back(0);


    while(n--){
        int temp;
        fin >> temp;
        if(temp == 1) {
            holsteins.push_back(1+holsteins.back());
            guernseys.push_back(guernseys.back());
            jerseys.push_back(jerseys.back());
        } else if(temp == 2) {
            holsteins.push_back(holsteins.back());
            guernseys.push_back(1+guernseys.back());
            jerseys.push_back(jerseys.back()); 
        } else  {
            holsteins.push_back(holsteins.back());
            guernseys.push_back(guernseys.back());
            jerseys.push_back(1+jerseys.back());  
        }
    }
    while(T--) {
        int x, y;
        fin >> x >> y;
        vi sol = solve(x,y);
        fout << sol[0] << " " << sol[1] << " " << sol[2] << endl;
    }
    return 0;
}
