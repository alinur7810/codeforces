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
    string s; cin >> s;
    int c=1;
    int maxc = -1e9;
    for (int i=0; i<sz(s); ++i){
        if (s[i]==s[i+1]){
            c++;
        }else{
            maxc = max(maxc, c);
            c=1;
        }
    }
    cout <<maxc;
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