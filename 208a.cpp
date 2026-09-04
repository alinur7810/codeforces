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
    string ss = "";
    for (int i=0; i<sz(s); ++i){
        if (s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B'){
            s[i] = ' ';
            s.erase(i+1, 2);
        }
    }
    bool space = false;
    for (int i=0; i<sz(s); ++i){
        if (s[i] != ' '){
            space = false;
            ss+=s[i];

        }
        else{
            if (!space){
                ss+=' ';
                space = true;
            }
        }
    }
    if (s[0] == ' ') ss.erase(0, 1);
    cout << ss;
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