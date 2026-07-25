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
    int n, k; cin >> n >> k;
    vi v(n);
    int mind = INF;
    int mindi;
    ll mul = 1; bool f = false;
     int evc = 0;
    for (int i=0; i<n; ++i) {
        cin >> v[i];
        if (v[i]%2==0) evc++;
    }
    
    
   
    for (int i=0; i<n; ++i){
        if (v[i] == k || v[i] % k == 0) f = true;
        if (k-(v[i]%k) < mind){
            mind = k-(v[i]%k;
            mindi = i;
        }
    }
    if (f){
        cout << 0 << '\n';
        return;
    }
    int c=0;
    while (v[mindi] % k != 0){
        v[mindi]++;
        c++;
    }
    if (k==4){
        c = min(c, evc-2);
    }
    cout << c << '\n';
    
    
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