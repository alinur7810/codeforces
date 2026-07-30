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
    vi v(5);
    for (int i=0; i<n; ++i){
        int x; cin >> x;
        v[x]++;
    }

    int ans=0;
    ans += v[4];

    ans += v[3];
    v[1]=max(0, v[1]-v[3]);

    ans += v[2]/2;
    if (v[2] % 2 != 0){
        ++ans;
        v[1] = max(0, v[1]-2);
    }
    if (v[1]>0){
        ans += (v[1]+3)/4;
    }
    

    cout << ans;    
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