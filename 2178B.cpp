// https://codeforces.com/problemset/problem/2178/B

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int c = 0;
    string s;
    cin >> s;
    int n = s.size();
    if(s[0] == 'u'){
        c++; 
        s[0] = 's';
    }

    for(int i = 1; i < n; i++){
        if(s[i] == 'u' and s[i - 1] == 'u' and i < n - 1){
            c++;
            s[i] = 's';
        }
        if(i == n - 1 and s[i] == 'u'){
            c++;
        }
    }
    cout << c << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}