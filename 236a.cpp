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
    vector<char> v; char c;
    while (cin >> c){
        v.push_back(c);
    }

    sort(all(v));
    v.erase(unique(all(v)), v.end());

    cout << (!(sz(v) & 1) ? "CHAT WITH HER!" : "IGNORE HIM!");
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