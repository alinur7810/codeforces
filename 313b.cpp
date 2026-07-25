#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s; cin >> s; int n = s.size();
    int m; cin >> m;
    
    vector<int> v(n+1, 0);
    
    for (int i=1; i<n; ++i){
        v[i+1] = v[i];
        if (s[i] == s[i-1]){
            v[i+1]++;
        }
    }
    
    for (int i=0; i<m; ++i){
        int l, r; cin >> l >> r;
        cout << v[r]-v[l] << '\n';
    }
}