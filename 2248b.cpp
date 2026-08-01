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
    int n, m; cin >> n >> m;
    vi a(n), b(m);
    for (auto &i : a){ cin >> i; }
    for (auto &i : b){ cin >> i; }

    if (sz(a) != sz(b)*2){
        cout << "NO\n";
        return;
    }

    sort(all(a)); sort(all(b));
    if (a[0] > b[0]){
        cout << 'NO\n'; return;
    }
    int i=0, j=0, k=0;
    bool is = true;
    vector<bool> iss(sz(b));
    while (i<j){
        int x = a[i];
        int y;
        while(b[k] > a[j]){
            j++;
        }
        y=a[j];
        iss.push_back(true)
        k++;
        ++i; ++j;
    }

    for (auto b : iss){
        if (!b) is = false;
    }
    if (is) cout << "YES\n";
    else cout << "NO\n";

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