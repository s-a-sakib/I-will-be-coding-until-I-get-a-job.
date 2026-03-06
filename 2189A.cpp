// https://codeforces.com/problemset/problem/2189/A
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, l, h, a;
    cin >> n >> l >> h;

    int c1 = 0, c2 = 0;
    if(l > h) swap(l,h);
    for(int i = 0; i < n; i++){
        cin >> a;
        if(a <= l) c1++;
        if(a <= h) c2++;
    }
    cout << min(c1, c2/2) << endl;
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