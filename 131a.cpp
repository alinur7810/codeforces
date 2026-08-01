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
    string s; cin >> s;
    if (sz(s)==1){
        if (islower(s[0])) cout << (char)toupper(s[0]);
        else cout << (char)tolower(s[0]);
        return;
    }
    bool o = true;
    for (int  i=1; i<sz(s); ++i){
        char c = s[i];
        if ( c != (char)toupper(c) ){
            o=false;
        }
    }
    if (o){
        if (s[0] == (char)tolower(s[0])){
            cout << (char)toupper(s[0]);
        }else{
            cout << (char)tolower(s[0]);
        }
        for (int i=1; i<sz(s); ++i){
            cout <<(char)tolower(s[i]);
        }
    }else{
        cout << s;
    }
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