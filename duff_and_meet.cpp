#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;

#define all(v) (v).begin(), (v).end()
#define pb push_back
#define sz(x) (int)(x).size()

void solve() {  
    int n; cin >> n;
    vector<pair<ll, ll>> v(n);
    for (auto &i : v){
        cin >> i.first >> i.second;
    }
    ll cmin = 1e4;
    ll ans=0;
    for (int i=0; i<n; ++i){
        cmin = min(cmin, v[i].second);
        ans+= cmin * v[i].first;
    }
    cout << ans;
}

int main() {
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin); 
    // #endif

    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
}