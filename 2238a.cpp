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
    int n, c; cin >> n >> c;
    vi a(n), b(n);
    for (auto &i : a){
        cin >> i;
    }
    for (auto &i : b){
        cin >> i;
    }
    vi aa = a;
    vi bb = b;
    sort(all(aa)); sort(all(bb));
    bool without = true;
    int wans = 0;
    int impos = false;
    for (int i=0; i<n; ++i){
        if (aa[i] < bb[i]) impos = true;
    }
    if (impos){
        cout << -1 << '\n'; return;
    }
    for (int i=0; i<n; ++i){
        if (!(a[i] >= b[i])){
            without = false;
            
        }
        wans += (a[i]-b[i]);
    }
    if (without){
        cout << wans << '\n';
    }
    else{
        int ans = 0;
        ans +=c;
        for (int i=0; i<n; ++i){
            ans += a[i]-b[i];
        }
        cout << ans << '\n';
    }

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