#include <bits/stdc++.h>
#define all(s) s.begin(), s.end()
using namespace std;
using ll = long long;

void solve(){
    ll n; cin >> n;
    
    ll x;
    for (int i=1; i<=n+1; ++i){
        if (n % i != 0){
            cout << i-1 << '\n'; 
            return;
        }
    }
    
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int t; cin >> t;
	while (t--){
	    solve();
	}
}
