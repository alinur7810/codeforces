#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
using namespace std;
using ll = long long;
using ld = long double;
using d = double; 

void solve(){
    int n; cin >> n;
    vector<int> v(n);
    for (auto &i : v){
        cin >> i;
    }
    int ans = v[n-1] - v[0];
    
    for (int i=0; i<n; ++i){
        ans = max(ans, v[n-1] - v[i]);
    }
    
    for (int i=0; i<n; ++i){
        ans = max(ans, v[i] - v[0]);
    }
    
    for (int i=0; i<n-1; ++i){
        ans = max(ans, v[i]-v[i+1]);
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
    