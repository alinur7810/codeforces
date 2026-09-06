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
    vi v(n);
    int z=0,nz=0;
    for (auto &i : v){
        cin >> i;
        if (i==0) z++;
        else nz++;
    }
    if (z==0){
        yeah;
        for (int i=0; i<n; ++i){
            cout << 'A';
        }
        lol;
    }
    else if (z==1){
        nah;
    }
    else{
        bool a=false, b=false;
        yeah;
        for (int i=0; i<n; ++i){
            if (v[i]==0){
                if (!a){
                    cout << 'A';
                    a=true;
                }else{
                    cout << 'B';
                }
            }else {
                cout << 'C';
            }
        }
        lol;
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