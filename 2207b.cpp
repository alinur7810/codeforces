#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool check( ll x, ll n , ll m, ll L, const vector<ll> &a ){
    if (m==1) {
        return  L-a[n-1] <= x;
    }
    ll timee = x+1;
    ll k =1;
    
    for (int i = n-1; i>=0;--i){
        ll dt;
        if ( i == n-1 ) dt = L;
        else dt = a[i+1];
        dt -= a[i];
        timee -= dt;
        if (timee<=0) return false;
        
        ll usedk = min(k, m-1);
        if (timee > L + 69) break;
        timee = (timee*(usedk+1)+usedk-1)/usedk;
        k = usedk+1;
    }
    ll dt = a[0];
    timee -= dt;
    
    return timee > 0;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t; cin >> t;
    while (t--){
        ll n, m, L;
    
        cin >> n >> m >> L;
        vector<ll> a(n);
        for (auto &i : a){ cin >> i; }
        
        ll l=0, r=2e10, ans = 0;
        while(l<=r){
            ll mid = l + (r-l)/2;
            if ( check(mid, n , m, L, a) ){
                ans = mid;
                r = mid-1;
            }else{
                l = mid+1;
            }
        }
        cout << ans << '\n';
    }
}