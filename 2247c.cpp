#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<ll, ll>;

#define all(v) (v).begin(), (v).end()
#define pb push_back
#define sz(x) (int)(x).size()

bool fast(int n, vi a, vi b){
    bool is = true;
    for (int i=0; i<n; ++i){
        if (a[i]!=b[i]) is = false;
    }
    return is;
}

void solve() {  
    int n; cin >> n;
    vi a(n); vi b(n);
    int sum = 0;
    for (auto &i : a){
        cin >> i; sum += i;
    }
    for (auto &i : b){
        cin >> i;
    }
    bool iss = fast(n, a, b);
    if (iss){
        cout << 0 << '\n';
        return;
    }
    
    bool one = true; 
    for (int i=0; i<n; ++i){
        if (1-a[i] != b[i]) one = false;
    }
    if (one && sum % 2 !=0){
        cout << 1 << '\n';
        return;
    }

    int za = 0, zb=0;
    for (int i=0; i<n; ++i){
        if ( a[i] == 0 ) za++;
        if ( b[i] == 0 ) zb++;
    }
    if (zb < za){
        cout << -1;
    }
    else{
        cout << 2;
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