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
    int n, k; cin >> n >> k;

    if (n-k < 2){
        cout << -1 << '\n';
        return;
    }
    int b = n-k;
    int o=(n+1)/2, z=n/2;
    int co =(b+1)/2, cz = (b)/2;
    for (int i=0; i<b; ++i){
        if (i%2==0){
            if (co == 1){
                while(o--) cout << 1;
            }else{
                cout << 1; o--; co--;
            }
        }else{
            if (cz > 1){
                cout << 0; z--; cz--;
            }else{
                while (z--) cout << 0;
            }
        }
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