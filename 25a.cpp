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
    int ind, ind1, c=0, c1=0;
    for (int i=0; i<n; ++i){
        int temp;
        cin >> temp;
        if (temp%2==0){
            ind = i+1;
            c++;
        }else{
            ind1 = i+1;
            c1++;
        }
    }
    cout << (c > c1 ? ind1 : ind);

}

int main() {
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin); 
    // #endif

    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
}