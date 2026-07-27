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
    int n; cin >> n;
    vll v(n);
    for (auto &i : v){
        cin >> i;
    }
    if (n%2!=0){
        cout << "NO\n"; return;
    }
    vll hz = v;
    sort(all(hz));
    bool h = abs(hz[n/2] - (hz[n/2-1] )) > 1;
    bool is = true;
    for (int i=0; i<n-1; ++i){
        if (i%2==0 ){
            if (!(v[i] > v[i+1])) is = false;
        }
        else{
            if (!(v[i] < v[i+1])) is = false;
        }
    }
    if ( !(h && is) ){
        cout << "NO\n";
    }else{
        cout << "YES\n";
    }


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