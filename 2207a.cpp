#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        string s; cin >> s;
        bool changed = true;
        while (changed){
            changed = false;
            for (int i=1; i<n-1; ++i){
            if ( s[i] == '0' && s[i-1] == s[i+1] && s[i+1] == '1'){
                s[i] = '1';
                changed = true;
            }
        }
        }
        
        int max_ones = 0, min_ones=0;
        for (auto &i : s){
            if (i=='1') max_ones++;
        }
        
        for (int i=1; i<n-1; ++i){
            if ( s[i-1] == s[i+1] && s[i+1] == '1'){
                 s[i] = '0';
            }
        }
        for (auto &i : s){
            if (i=='1') min_ones++;
        }
        
        cout << min_ones << ' ' << max_ones << '\n';
    }
}