#include<bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;
#define endl "\n";
#define ff first
#define ss second

int solve(vector<int> T){
    sort(T.begin(),T.end());
    if(T[0] != 1){
        return 1;
    } else if (T[T.size()-1] != T.size() + 1){
        return T.size() + 1;
    }
    for(int x = 0; x < T.size() - 1; x++){
        if(abs(T[x] - T[x+1]) > 1) {
            return (T[x] + T[x+1])/2;
        }
    }
}

int main() {
    int T = 1;
    cin >> T;
    vector<int> array;
    for(int i = 0; i < T-1; i++){
        int temp;
        cin >> temp;
        array.push_back(temp);
        
    }
    cout << solve(array) << endl;
    return 0;
}
