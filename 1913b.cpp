#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s; cin >> s;
    map<char, int> m;
    for (auto &i : s){
        m[i]++;
    }
    if ( m['0'] == m['1'] ){
        cout << 0 << '\n';
        return;
    }

    for ( int i=0; i<s.size(); ++i ){
        if ( s[i] == '1' ){
            
            if ( m['0'] > 0){
                m['0']--;
            }
            else{
                cout << s.size() - i << '\n';
                return;
            }
        }
        else{
            
            if ( m['1'] > 0){
                m['1']--;
            }
            else{
                cout << s.size() - i << '\n';
                return;
            }
            
        }
    }
    
    cout << 0 << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
	while (t--){
	    solve();
	}
	
	
}
