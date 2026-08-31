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
    string s; cin >> s;
    bool o = false;
    bool t = false;
    for (int i=1; i<n-1; ++i){
        if (s[i] != s[i+1] && s[i] != s[i-1]){
            o = true;
            if (s[i-1] == s[i+1]){
                t=true;

                break;
                
            }
        }
    }
    int N = 1;
    for (int i=0; i<n-1;++i){
        if ( s[i] != s[i+1] ) N++;
    }
    if (t){
        cout << N-2;
    }else if (o){
        cout << N-1;
    }else{
        cout << N;
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