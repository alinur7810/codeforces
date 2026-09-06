#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<ll, ll>;

#define all(v) (v).begin(), (v).end()
#define pb push_back
#define sz(x) (int)(x).size()
#define nl '\n'
#define nah cout << "NO\n"
#define yeah cout << "YES\n"
#define lol cout << '\n'

void solve() {  
    int n; cin >> n;
    vi v(n);
    for (auto &i : v){
        cin >> i;
    }
    int ans = 0;
    int odd=0, even=0, oddd=0;
    for (int i=0; i<n; ++i){
        if ( v[i] %2 ==0 && (v[i]/2 + 1) %2 ==0) even++;
        else if ( v[i] %2 ==0 && (v[i]/2 + 1) %2 !=0) odd++;
        else if (v[i]%2!=0) oddd++;
    }
    ans = max(odd, even);
    ans = max(ans, oddd);
    cout << ans;
    lol;
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
};