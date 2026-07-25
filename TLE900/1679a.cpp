#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
using namespace std;
using ll = long long;
using ld = long double;
using d = double; 

void solve(){
    ll n; cin >> n;
    ll m, M;
    if (n&1 || n<4){
        cout << -1 << '\n';
        return;
    }
    m = (n+5) /6;
    M = n / 4; 
    cout << m << ' ' << M << '\n';
    
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int t; cin >> t;
	while (t--){
	    solve();
	}
}
