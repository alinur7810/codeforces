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
    vector<int> v(7, 0);
    v[1] += 3; v[3+1]-=3;
    v[2] += 2; v[5+1]-=3;

    vector<int> p(7);
    for (int i=1; i<=6; ++i){
        p[i]=p[i-1]+v[i];
    }
    for (int i=1; i<=5;++i){
        cout << p[i] <<' ';
    }

}

int main() {
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin); 
    // #endif

    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}