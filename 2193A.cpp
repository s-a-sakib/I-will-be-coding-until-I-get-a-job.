// https://codeforces.com/problemset/problem/2193/A

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, s, x, a;
    cin >> n >> s >> x;

    int sum = 0;
    for(int i = 0; i < n; i++){
        cin >> a;
        sum += a;
    }
    if((s - sum) % x == 0 and s >= sum){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}

int main(){
    int n;
    cin >> n;
    while(n--){
        solve();
    }
    return 0;
}