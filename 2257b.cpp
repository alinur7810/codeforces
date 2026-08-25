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
    int n, m; cin >> n >> m;
    vi a(n), b(m);
    for (auto &i : a){
        cin >> i;
    }

    for (auto &i : b){
        cin >> i;
    }
    int N=0, M=0;
    bool over = false;
    bool move = true;
    int winner;
    while(!(over)){
        if (move){
            b[M]--;
            if (M == m-1 && b[M]==0){
                over = true;
                winner = 1;
            }else if (b[M]==0 || M+1 < m && b[M] < b[M+1]){
                M++;
            }
            move = false;
        }
        else{
            a[N]--;
            if (N == n-1 && a[N]==0){
                over = true;
                winner = 2;
            }else if (a[N]==0 || N + 1 < n && (a[N] < a[N+1])){
                N++;
            }
            move = true;
        }
    }
    cout << winner << nl;
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