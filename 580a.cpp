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
    vi v(n); 
    for (auto &i : v){
        cin >> i;
    }
    int c=1;
    int ans = -1e9;
    for (int i=0; i<n-1; ++i){
        if (v[i] <= v[i+1]){
            c++;
        }else{
            ans = max(ans, c);
            c=1;
        }
    }
    ans = max(ans, c);
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