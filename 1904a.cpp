#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a, b; cin >> a >> b;
    
    vector<pair<int, int>> pm = {
        {a, b}, {a, -b}, {-a, b}, {-a, -b},
        {b, a}, {b, -a}, {-b, a}, {-b, -a}
    };
    int xk, yk, xq, yq; cin >> xk >> yk >> xq >> yq;
    
    set<pair<int, int>> km;
    for (const auto &i : pm ){
        km.insert({xk + i.first, yk+i.second});
    }
    
    set<pair<int, int>> qm;
    for (const auto &i : pm){
        qm.insert({xq+i.first, yq + i.second});
    }
    int ans = 0;
    for (auto &i : km){
        if ( qm.count(i) ) ++ans;
    }
    cout << ans << '\n';
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	int t; cin >> t; while(t--) solve();
}
