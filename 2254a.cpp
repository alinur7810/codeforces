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
    vi v(3);
    for (auto &i : v){
        cin >> i;
    }

    int cnt=0;
    while (true){
        bool o = (v[0]==v[1]);
        bool t = (v[1]==v[2]);
        bool th = (v[0]==v[2]);
        if (o||t||th){
            break;
        }
        sort(all(v));
        
        v[0]++;
        v[2]--;
        cnt++;
    }
    cout << cnt; lol;

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