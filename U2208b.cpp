#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;

#define all(v) (v).begin(), (v).end()
#define pb push_back
#define sz(x) (int)(x).size()

const int INF = 1e9 + 7;
const ll LINF = 1e18 + 7;

void solve() {
    int n, k, p, m; cin >> n >> k >> p >> m; p--;
    vector<int> v(n);
    for (auto &i : v){
        cin >> i;
    }
    int ans=0;
    while (m > 0){
        if (p<k){
            if ( m < v[p] ) break;
            m -= v[p];
            int val = v[p];
            v.erase(v.begin()+p);
            v.push_back(val);
            p=n-1;
            ans++;
        }
        else if (p>=k){
            int minpo=1e9;
            int minpos;
            for (int i=0; i<k; ++i){
                if (v[i] < minpo){minpos=i; minpo = v[i];}
            }
            if ( m < v[minpos] ) break;
            m -= v[minpos];
            int val = v[minpos];
            v.erase(v.begin()+minpos);
            v.push_back(val);
            p--;
            
        }
    }
    cout << ans << '\n';
    
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