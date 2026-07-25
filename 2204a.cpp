#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    string s; cin  >> s;
    if ( s[0] == 'L'){
        cout << 1 << '\n';
        return;
    }
    int ans = 0;
    for (int i=0; i<n; ++i){
        if ( s[i] == 'R'){
            ans++;
        }else{
            ans++;
            break;
        }
    }
    cout << ans << '\n';
    
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
	while (t--){
	    solve();
	}
	
	
}
