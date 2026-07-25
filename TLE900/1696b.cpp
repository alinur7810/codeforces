#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
using namespace std;
using ll = long long;
using ld = long double;
using d = double; 

void solve(){
    int n; cin >> n;
    vector<int> v(n);
    for (auto &i : v){
        cin >> i;
    }
    int c=0;
    for (int i = 0; i<n; ++i){
        if (v[i] != 0 && (v[i-1] == 0 || i == 0)){
            c++;
        }
        
    }
    cout << min(2, c) << '\n';
    
    
    
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int t; cin >> t;
	while (t--){
	    solve();
	}
}
