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
    vector<int> v(n);
    int minn=1e7;
    int evc = 0;
    int fast = false;
    for (auto &i : v){
        cin >> i;
        if (i%2==0) evc++;
        if (i%k==0) fast = true;
    }
    if (fast){
        cout << 0 << '\n';
        return;
    }

    for (auto &i : v){
        if ( abs((i/k+1)*k - i) < minn) minn = (i/k+1)*k - i;
    }
    
    if (k==4){
        if (evc > 2) cout << min(0,minn) <<'\n';
        else cout << min(2 - evc, minn)<<'\n';
        
    }
    else cout << minn << '\n';
    
    
    
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