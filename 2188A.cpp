// https://codeforces.com/problemset/problem/2188/A
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k = 1;
    cin >> n;
    int a[n];
    a[0] = n;
    for(int i = 1; i < n; i++){
        if(i % 2 == 0) a[i] = a[i - 1] + (n - i);
        else a[i] = a[i - 1] - (n - i);
    }
    for(int i = n - 1; i >= 0; i--) cout << a[i] <<" ";
    cout << endl;
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