#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;

#define all(v) (v).begin(), (v).end()
#define pb push_back
#define sz(x) (int)(x).size()

const int INF = 1e9 + 7;
const ll LINF = 1e18 + 7;

void solve() {
    ll n; cin >> n;
    vll v(n);
    for (auto &i : v){
        cin >> i;
    }
    
    int ans = INF;
    int curr;
    for (int i=0; i<n; ++i){
        int med = v[i];
        int l=0, r=0;
        for (int i=0; i<n; ++i){
            if (med < v[i]) r++;
            else if (med > v[i]) l++;
        }
        ans = min(ans, max(l,r));
    }
    cout << ans <<'\n';
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}