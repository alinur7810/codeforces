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
    int sum = 0;
    for (auto &i : v){
        cin >> i;
        sum+=i;
    }
    if (abs(sum)%4==0){
        cout << "YES\n";
    }else{
        cout << "NO\n";
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