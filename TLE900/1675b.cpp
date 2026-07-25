#include <bits/stdc++.h>

#define all(v) v.begin(), v.end()
using namespace std;
using ll = long long;
using ld = long double;
using d = double;

bool isSorted(vector < auto > v) {
    bool is = true;
    for (int i = 0; i < v.size() - 1; ++i) {
        if (v[i] >= v[i + 1]) is = false;
    }
    return is;
}

void solve() {
    ll n;
    cin >> n;
    vector < int > v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        
    }
    int c=0;
    for (int i = n-2; i >= 0; --i) {
        while ((v[i] >= v[i+1] && v[i] > 0) ){
            v[i] /= 2;
            c++;
            
        }
        if (v[i] >= v[i+1]){
                cout << -1 << '\n';
                return;
            }
    }
    cout<< c << '\n';

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}