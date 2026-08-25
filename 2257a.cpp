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
    map<char, bool> mm;
    for (int i=0; i<n; ++i){
        string temp; cin >> temp;
        mm[temp[0]] = true;
    };
    bool allTrue=true;
    for (int i=0; i<m; ++i){
        string t; cin >> t;
        for (auto &j : t){
            if (!(mm.contains(tolower(j)))){
                allTrue = false;
                break;
            }
        }
    }
    cout << (allTrue ? "YES\n" : "NO\n");
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