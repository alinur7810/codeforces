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
    for (int i=0; i<sz(s); ++i){
        if (s[i]=='0'){
            s[i]='l';
            break;
        }
    }
    for (int i=0; i<sz(s); ++i){
        if (s[i]=='1'){
            s[i]='l';
            break;
        }
    }
    for (auto &i : s){
        if (i!='l') cout << i;
    }
    cout << '\n';
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