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
    string a="", b="", c="1", d="0";
    string s; cin >> s;
    bool sw=true;
    int cnt=0;
    for (int i=0; i<n; ++i){
        if (i%4==0 || i%4==1){
            a+='0'; b+='1';
        }
        else if (i%4==2 || i%4==3){
            a+='1'; b+='0';
        }
    }
    for (int i=0; i<n-1; ++i){
        if (i%4==0 || i%4==1){
            c+='0'; d+='1';
        }
        else if (i%4==2 || i%4==3){
            c+='1'; d+='0';
        }
    }
    int q=1,w=1,e=1,r=1;
    for (int i=0; i<n; ++i){
        if (s[i] != a[i] && s[i]!='?') q=0;
        if (s[i] != b[i] && s[i]!='?') w=0;
        if (s[i] != c[i] && s[i]!='?') e=0;
        if (s[i] != d[i] && s[i]!='?') r=0;
    }
    cout << q+w+e+r; lol;
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