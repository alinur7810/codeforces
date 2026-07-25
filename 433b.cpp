#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    vector<int> v(n+1, 0); for (int i=1; i<=n; ++i){ cin >> v[i]; }
    
    vector<int> u = v;
    sort(u.begin()+1, u.end());
    
    vector<long long> V(n+1, 0);
    vector<long long> U(n+1, 0);
    for (int i=1; i<=n; ++i){
        U[i] = U[i-1]+u[i];
        V[i] = V[i-1]+v[i];
    }

    int m; cin >> m;
    for (int i=0; i<m; ++i){
        int type; cin >> type;
        int l, r; cin >> l >> r;
        if (type == 1){
            cout << V[r]-V[l-1];
    }else{
        cout << U[r]-U[l-1];
    }
    cout << '\n';
    }
    
    
}