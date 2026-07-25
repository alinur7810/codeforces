#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n, k;

bool check(ll x, const vector<ll> &Times){
    return Times[x] + k <= 240;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    if (k <= 240-(10+5*(n-1))*n/2) cout << n;
    else{
    vector<ll> times(n+1, 0);
    vector<ll> Times = times;

    for (int i=1; i<=n; ++i){
        times[i] = 5*i;
        Times[i] = Times[i-1]+times[i];
    }
    ll l=0, r=10, ans=0;
    while (l<=r){
        ll mid = l+(r-l)/2;
        if (check(mid, Times)){
            ans = mid;
            l=mid+1;
        }else{
            r = mid-1;
        }
    }
    
    cout << ans;
    }
}
