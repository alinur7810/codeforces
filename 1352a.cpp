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
    vi v;
    int ans = 0;
    int d=1;
    while(n>0){
        int dd = n%10;
        if (dd !=0){
            v.push_back(dd*d);
        }
        n/=10;
        d*=10;
    }
    cout << sz(v) << nl;
    for (auto &i : v){
        cout << i<<' ';
    }
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