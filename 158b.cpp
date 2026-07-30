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
    vi v(n);
    for (auto &i : v){
        cin >> i;
    }
    sort(all(v));
    int ans = 0;
    int i=0, j=n-1;
    int cap = 0;

    while (i < j){
        if (v[j] == 4){
            j--;
        }
    }
    vi a;
    while(i<j){
        if (v[i]+v[j] <= 4){
            a.push_back(v[i]+v[j]);
        }
        
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