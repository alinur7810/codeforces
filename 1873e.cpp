#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool check(ll h, ll n, ll x, const vector<ll>& a){
    ll capacity = 0;
    for (int i=0; i<n; ++i){
        if(a[i]<=h){
            capacity += h-a[i];
        }
        
        if (capacity > x){
            return false;
        }
    }
    return capacity <= x;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    
    while(t--){
        ll n, x;
        vector<ll> a;
        cin >> n >> x;
        a.resize(n);
        
        for (ll i=0; i<n; ++i){ cin >> a[i]; }
        
        ll l = 0, r=2e9, ans = 0;
        while (l<=r){
            ll mid = l+(r-l)/2;
            if (check(mid, n, x, a)){
                ans = mid;
                l = mid+1;
            }else{
                r=mid-1;
                }
        }
        cout << ans << '\n';
    }
    
    
}