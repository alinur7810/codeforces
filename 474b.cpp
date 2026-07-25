#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

    int n; cin >> n;
    vector<long long> v(n+1, 0);
    vector<long long> V=v;
    
    for (int i=1; i<=n; ++i){
        cin >> v[i];
        V[i]=V[i-1]+v[i];
    }
    
    int m; cin >> m;
    for (int i=0; i<m; ++i){
        int q; cin >> q;
        auto it = lower_bound(V.begin()+1, V.end(), q);
        cout << it - V.begin() << '\n';
    }
}
