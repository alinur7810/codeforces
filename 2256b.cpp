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

bool one(string s){
    bool pos=true;
    bool sw = true;
    bool o, t, th, f;
    for (int i=0; i<sz(s)-1; i+=2){
       if (sw){
        o = ((s[i]=='0' || s[i]=='?'));
        t = (s[i+1]=='0' || s[i+1]=='?');
        if (!(o && t)){
            pos = false;
        }
        sw = false;
       }
       else{
        o = ((s[i]=='1' || s[i]=='?'));
        t = (s[i+1]=='1' || s[i+1]=='?');
        if (!(o && t)){
            pos = false;
        }
        sw = true;
       }
    }
    return pos;
}
bool two(string s){
    bool pos=true;
    bool sw=true;
    bool o, t, th, f;
    for (int i=0; i<sz(s)-1; i+=2){
        if (sw){
        o = ((s[i]=='1' || s[i]=='?'));
        t = (s[i+1]=='1' || s[i+1]=='?');
        if (!(o && t)){
            pos = false;
        }
        sw = false;
       }
       else{
        o = ((s[i]=='0' || s[i]=='?'));
        t = (s[i+1]=='0' || s[i+1]=='?');
        if (!(o && t)){
            pos = false;
        }
        sw = true;
       }
    }
    return pos;
}
bool three(string s){
    bool pos=true;
    bool sw = true;
    bool o, t, th, f;
    if (s[0] != '0'){
        pos = false;
    }
    for (int i=1; i<sz(s)-1; i+=2){
        if (sw){
        o = ((s[i]=='1' || s[i]=='?'));
        t = (s[i+1]=='1' || s[i+1]=='?');
        if (!(o && t)){
            pos = false;
        }
        sw = false;
       }
       else{
        o = ((s[i]=='0' || s[i]=='?'));
        t = (s[i+1]=='0' || s[i+1]=='?');
        if (!(o && t)){
            pos = false;
        }
        sw = true;
       }
    }
    return pos;
}
bool four(string s){
    bool pos=true;
    bool sw=true;
    bool o, t, th, f;
    if (s[0] != '1'){
        pos = false;
    }
    for (int i=1; i<sz(s)-1; i+=2){
        if (sw){
        o = ((s[i]=='0' || s[i]=='?'));
        t = (s[i+1]=='0' || s[i+1]=='?');
        if (!(o && t)){
            pos = false;
        }
        sw = false;
       }
       else{
        o = ((s[i]=='1' || s[i]=='?'));
        t = (s[i+1]=='1' || s[i+1]=='?');
        if (!(o && t)){
            pos = false;
        }
        sw = true;
       }
    }
    return pos;
}


void solve() {  
    int n; cin >> n;
    string s; cin >> s;
    int ans = 0;
    if (sz(s)==2){
        if (s=="??") ans = 4;
        else ans = 2;
    }
    else if (sz(s) > 4){
        if (one(s)) ans++;
        if (two(s)) ans++;
        if (three(s)) ans++;
        if(four(s)) ans++;
    }
    
    cout << ans;
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