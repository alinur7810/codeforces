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
    int n, k; cin >> n >> k;
    string s; cin >> s;
    int ans = 0;
    int i=0;
    while (i<n){
        bool found = false;
        for (int j=0; j<k; ++j){
            if (s[i]=='0'){
                found = true;
            }
            ++i;
            
        }
        if (!found) ans++;
        found = false;
    }
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
}