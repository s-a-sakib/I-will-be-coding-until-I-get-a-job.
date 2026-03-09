// https://codeforces.com/problemset/problem/2185/B

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, mx = INT_MIN, a;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a;
        mx = max(mx , a);
    }
    cout << mx * n << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}