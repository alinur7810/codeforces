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

int mex(const vi& v){
    vector<bool> b(sz(v)+1, 0);
    for (auto &i : v){
        if (i >= 0 && i <= sz(v)){
            b[i]=1;
        }
    }
    int mexx = 0;
    while(b[mexx]){
        mexx++;
    }
    return mexx;
}

void solve() {  
    int n; cin >> n;
    vi v(2*n);
    for (auto &i : v){
        cin >> i;
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