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
    int n; cin >> n; int blyatnadoelo = 0;
    vi a(n); vi b(n);
    for (auto &i : a){
        cin >> i;
    }
    for (auto &i : b){
        cin >> i;
        blyatnadoelo += i;
    }
    bool iss = fast(n, a, b);
    if (iss){
        cout << 0 << '\n';
        return;
    }
    bool one = false;
    bool poss = false;
    bool heregoznaet = false;
    int c=0; int sum = 0;
    for (int i=0; i<n; ++i){
        if (a[i]==1) poss = true;
        if ( 1-a[i] == b[i] ){
            one = true;
            sum += a[i];
        }
    }

    if (!(poss) || blyatnadoelo == n){
        cout << -1;
    }
    else if ( sum%2 != 0 ){
        cout << 1;
    }else{
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