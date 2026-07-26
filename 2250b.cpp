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
    string s = "";
    if (k==0){
        s+= '1';
        for (int i=0; i<n-1; ++i){
            s+= ( s.back()=='1' ? '0' : '1' );
        }
        cout << s <<'\n';
    }
    else if (k%2==0 && k == n/2){
        for (int i=0; i<k; ++i){
            s += (i%2 == 0 ? "11" : "00");
        }
        cout << s<<'\n';
    }
    else if (k <= n/2){
        if (k==1) s+='0';
        else{
            for (int i=0; i<k; ++i){
            s += (i%2 == 0 ? "11" : "00");

        }
        int tt = n-s.size();
        tt = max(0, (int)(n - s.size()));
        while (tt--){
            s.push_back( (s.back() =='1' ? '0' : '1' ) );
        }
        cout << s << '\n';
        }
        
    }
    else{
        if (k%2 == 0){
            for (int i=0; i<k/2+1; ++i){
                s+='1';
            }
            for (int i=0; i<k/2+1; ++i){
                s+='0';
            }
            int ost = n-s.size();
            while (ost--){
                s.push_back( (s.back() =='1' ? '0' : '1' ) );
            }
            cout << s << '\n';
        }
        else{
            for (int i=0; i<k/2+2; ++i){
                s += '1';
            }
            for (int i=0; i<k/2+1; ++i){
                s +='0';
            }
            int ost = n-s.size();
            while (ost--){
                s.push_back( (s.back() =='1' ? '0' : '1' ) );
            }
            cout << s << '\n';
        }
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