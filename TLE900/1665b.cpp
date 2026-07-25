#include <bits/stdc++.h>

#define all(v) v.begin(), v.end()
using namespace std;
using ll = long long;
using ld = long double;
using d = double;

bool isSorted(vector < auto > v) {
    bool is = true;
    for (int i = 0; i < v.size() - 1; ++i) {
        if (v[i] >= v[i + 1]) is = false;
    }
    return is;
}

void solve() {
    ll n;
    cin >> n;
    vector < ll > v(n);
    map < ll, ll > m;
    ll ma = -1;
    for (auto & i: v) {
        cin >> i;
        m[i]++;
        ma = max(ma, m[i]);
        
    }

    if (ma == n){
        cout << 0 << '\n';
        return;
    }
    
    ll ans = n-ma;
    while (ma < n){
        ma *=2;
        ans++;
    }
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}