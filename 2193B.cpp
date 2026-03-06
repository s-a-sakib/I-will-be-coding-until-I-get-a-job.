// https://codeforces.com/contest/2193/problem/B
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, l = -1 , r = -1, x;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(l == -1 and a[i] != n - i){
            x = n - i;
            l = i;
            
        }
        
        if(l != -1 and a[i] == x){
            r = i;
        }
    }
    if(l == -1){
        for(int i = 0; i < n; i++) cout << a[i] << " ";
        cout << endl;
        return;
    }
    for(int i = 0; i < l; i++) cout << a[i] << " ";
    for(int i = r; i >= l; i--) cout << a[i] << " ";
    for(int i = r + 1; i < n; i++) cout << a[i] << " ";
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