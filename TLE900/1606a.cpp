#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;

#define all(v) (v).begin(), (v).end()
#define pb push_back
#define sz(x) (int)(x).size()

const int INF = 1e9 + 7;
const ll LINF = 1e18 + 7;

void solve() {
    string s; cin >> s;
    
    if (s[0] == s[s.size()-1]){
        cout << s << '\n';
    }
    else{
        s[0] = s[s.size()-1];
        cout << s << '\n';
    }
    
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}