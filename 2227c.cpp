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
    vi trash;
    vi even;
    vi s;
    vi trr;
    for (int i=0; i<n; ++i){
        int temp; cin >> temp;
        if (temp%6==0) s.pb(temp);
        else if (temp % 2==0) even.pb(temp);
        else if (temp % 3==0) trr.pb(temp);
        else trash.pb(temp);
    }

    
    for (auto &i : trr){
        cout << i << ' ';
    }
    for (auto &i : trash){
        cout << i << ' ';
    }
    for (auto &i : even){
        cout << i << ' ';
    }
    for (auto &i : s){
        cout << i << ' ';
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