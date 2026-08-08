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
    vi v(n);
    for (auto &i : v){
        cin >> i;
    }
    int fans = 0;
    for (int i=0; i<n-1; ++i){
        if (v[i]==v[i+1]) fans++;
    }
    bool ptwo = false;
    bool pone = false;
    for (int i=0; i<n-3; ++i){
        if ( (v[i] == v[i+1]) && (v[i+2] == v[i+3]) && v[i] != v[i+2]){
            ptwo = true; break;
        }
        
    }
    for (int i=0; i<n-1; ++i){
        if (v[i]==v[i+1]){
        bool l = (i>0 && v[i-1] != v[i]);
        bool r = (i+2<n && v[i+2] !=v[i+1]);
        if ((l || r)){
            pone = true;
            break;
        }
        }
        
    }
    if (ptwo){
        cout << n-fans+2 << '\n'; 
    }
    else if (pone){
        cout << n-fans+1 << '\n'; 
    }else{
        cout << n-fans << '\n';
    }
    
    
}

int main() {
   

    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}