#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;

#define all(v) (v).begin(), (v).end()
#define pb push_back
#define sz(x) (int)(x).size()

void solve() {  
    int n; cin >> n;
    vll ochki(n+1);
    vll prefo(n+1);

    for (int i=1; i<=n; ++i){
        cin >> ochki[i];
        prefo[i] = prefo[i-1] + ochki[i];
    }
    ll ans = 0;
    string s; cin >> s;
    int i=0, j=n-1;

    while(i<j){
        if (s[i]=='L' && s[j]=='R'){
            ans += prefo[j+1]-prefo[i];
            ++i, j--;
        }
        else if ( s[i]=='R'){
            ++i;
        }
        else if ( s[j]=='L'){
            j--;
        }
        
    }
    cout << ans << '\n';
    
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