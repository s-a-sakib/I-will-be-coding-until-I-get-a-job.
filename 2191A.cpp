// https://codeforces.com/problemset/problem/2191/A

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, a;
    cin >> n;
    map < int , int > m;
    for(int i = 0; i < n; i++){
        cin >> a;
        m[a] = (i % 2);
    }
    for(int i = 1; i < n; i++){
        if(m[i] == m[i + 1]){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}