#include <bits/stdc++.h>
#define all(s) s.begin(), s.end()
using namespace std;
using ll = long long;

void solve(){
    ll n; cin >> n;
    string s; cin >> s;
    ll cur=1, ans=1;
    for (ll i=1; i<n+1; ++i){
        if ( s[i] != s[i-1] ) cur = 1;
        else ++cur;
        ans = max(cur, ans);
    }
    
    cout << ans+1 << '\n';
    
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int t; cin >> t;
	while (t--){
	    solve();
	}
}
