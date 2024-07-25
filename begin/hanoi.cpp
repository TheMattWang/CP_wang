#include<bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;
#define endl "\n";
#define ff first
#define ss second


//Knew it was recursive but was thinking that there was a greedy

void solve(vector<pair<int,int>> &moves, int T,int begin, int middle, int end ){
    //Base case? just one move
    if(T == 1){
        moves.push_back({begin,end});
        return;
    }
    solve(moves,T-1,begin,end,middle);
    moves.push_back({begin,end});
    solve(moves,T-1,middle,begin,end);

}

int main() {
    int T;
    cin >> T;
    vector<pair<int,int>> moves;
    solve(moves,T,1,2,3);
    cout << moves.size() << endl;
    for(auto x: moves) {
        cout << x.first << " " << x.second << endl;
    }
    return 0;
}
