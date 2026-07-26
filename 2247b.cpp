#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<ll, ll>;

#define all(v) (v).begin(), (v).end()
#define pb push_back
#define sz(x) (int)(x).size()

void solve() {  
    int n, k, m; cin >> n >> k >> m;
    if (k>m){
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    ll ans = m-k+1;
    ll sum = 0;
    ll c=0;
    cout << ans << ' ';
    
    for (int i=0; i<n-1; ++i){
        cout << 1 << ' ';
    }
    cout << "\n";
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin); 
    #endif

    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}