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
    ll x, n; cin >> x >> n;
    
    ll ans;
    
    if ( n%4 == 1 ) ans = -n;
    else if (n%4 == 2) ans = 1;
    else if ( n % 4 == 3) ans = n+1;
    else if (n%4 == 0) ans = 0;
    if (x==0) cout << ans;
    else{
        if (x % 2 == 0) cout << x+ans;
        else cout << x-ans;
    }
    cout << '\n';
    
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