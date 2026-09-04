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
    ll n; cin >> n;
    vll v(n);
    for (auto &i : v){
        cin >> i;
    }
    ll cap = 0;
    for (ll i=0; i<n-1; ++i){
        if (v[i]>v[i+1]){
            cap += (v[i]-v[i+1]);
            v[i+1] += (v[i]-v[i+1]);
        }
    }
    cout << cap;

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