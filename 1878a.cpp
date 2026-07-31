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
    int n, k; cin >> n >> k;
    int temp; bool f=false;
    for (int i=0; i<n; ++i){
        cin >> temp; 
        if (temp == k){
            f=true;
        }
    }
    cout << (f ? "YES\n" : "NO\n");
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