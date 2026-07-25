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
    vector<ll> first(n), second(n);
    ll suma=0, sumb=0;
    for (auto &i : first){
        cin >> i;

    }
    for (auto &i : second){
        cin >> i;

    }
    ll ans=0;
    ll maxb=0;
    
    for (int i=0; i<n; ++i){
        suma+= first[i];
        
        int kk = k-i-1;
        if (kk < 0){
            break;
        }
        maxb = max(maxb, second[i]);
        ans = max(ans, suma+kk*maxb);
       
        
    }
    
    cout << ans << '\n';
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