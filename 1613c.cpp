#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool check(ll &k, ll &n, ll &h, const vector <ll> &a) {
    ll capacity = 0;
    for (int i=0; i<n-1; ++i){
        capacity += min(k, a[i+1]-a[i]);
        if (capacity >= h) return true;
    }
    capacity += k;
    return capacity >= h;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        ll n, h;;
        cin >> n >> h;
        vector < ll > a(n);
        for (auto &i: a) {
            cin >> i;
        }

        ll l = 0, r = 2e18, ans = 0;

        while (l <= r) {
            ll mid = l + (r - l) / 2;
            if (check(mid, n, h, a)) {
                ans = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        cout << ans << '\n';
    }
    

}