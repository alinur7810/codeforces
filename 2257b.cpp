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
    int n, m; cin >> n >> m;
    vi a(n), b(m);
    for (auto &i : a){
        cin >> i;
    }

    for (auto &i : b){
        cin >> i;
    }
    int N = 0, M=0;
    for (int i=0; i<n-1; ++i){
        if (a[i] >= a[i+1]){
            N += a[i]-a[i+1]+1;
        }
    }
    for (int i=0; i<m-1; ++i){
        if (b[i] >= b[i+1]){
            M += b[i]-b[i+1]+1;
        }
    }
    N += a.back();
    M += b.back();
    // cout << N << ' ' << M;
    cout << ( (N==M || N>M) ? 1 : 2 );
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