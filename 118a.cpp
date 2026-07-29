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
    vector<char> s; char c;
    while (cin >> c){
        c = tolower(c);
        s.push_back(c);
    }
    for (char &i : s){
        if (i=='e' ||i=='u' ||i=='i' ||i=='o' ||i=='a' ||i=='y'){
            continue;
        }
        cout << '.' << i;
    }
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin); 
    #endif

    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
}