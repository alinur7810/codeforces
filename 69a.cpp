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
    int n; cin >> n;
    vi v = {0, 0, 0};
    for (int i=0; i<n; ++i){
        int x, y, z; cin >> x >> y >> z;
        v[0]+=x; v[1]+=y; v[2]+=z;
    }
    bool sixnineee = true;
    for (auto &i : v){
        if (i) sixnineee = false;
    }
    cout << ( sixnineee ? "YES" : "NO");
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin); 
    #endif

    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
}