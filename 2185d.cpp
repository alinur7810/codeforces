#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n, m, h; cin >> n >> m >> h;
    vector<ll> v(n); 
    
    for (int i=0; i<n; ++i){
        cin >> v[i];
    }
    vector<ll> V = v;
    for (int i=0; i<m; ++i){
        ll b, c; cin >> b >> c;
        V[b-1] = V[b-1] + c;
        if ( V[b-1] > h){
            V = v;
        }
    }
    
    for (auto &i : V){
        cout << i << ' ';
    }
    cout << '\n';
    
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t; cin >> t; while(t--) solve();

}
