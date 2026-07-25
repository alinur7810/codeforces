#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool check(ll x, ll n, ll s){
    return s/(n/2+1) >= x;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--){
        int n, s;
        cin >> n >> s;
        ll l=0, r=1e9, ans=-1;
        
        while (l<= r){
            ll mid = l+(r-l)/2;
            if (check(mid, n , s)){
                ans = mid;
                l = mid + 1;
            }else{
                r = mid -1;
            }
            
        }
        cout << ans << '\n';
    }
}
