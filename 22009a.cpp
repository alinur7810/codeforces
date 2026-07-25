#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n, c, k; cin >> n >> c >> k;
    vector<ll> a(n); for (auto &i : a){ cin >> i; }
    sort(a.begin(), a.end());
    if (*min_element(a.begin(), a.end()) > c ){
        cout << c << '\n';
        return;
    }
    
    for (ll i=0; i<n; ++i){
        if (a[i] <= c){
            ll minn = min(k, c-a[i]);
            a[i] += minn;
            c += a[i];
            k -= minn;
        }else{
            break;
        }    
        
    }
    
    cout << c << '\n';
    
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--){
        solve();
    }
}
