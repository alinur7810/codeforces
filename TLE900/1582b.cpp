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
    int n; cin >> n; vi v(n);
    ll s = 0;
    bool one = false;
    ll z = 0;
    ll o = 0;
    for (auto &i : v) {
        cin >> i; s +=i;
        if (i==1){
            one = true;
            o++;
        }
        if (i==0) z++;
    }
    
    if (!one){
        cout << 0 << '\n';
        return;
    }
    
    if ( z==0 ){
        cout << o;
    }else{
        cout << 1+o * (1ll << z)-1;
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