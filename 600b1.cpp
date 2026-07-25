#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n, m; cin >> n >> m;
    vector<int> a(n); for (auto &i : a){ cin >> i; }
    vector<pair<int, int>> b(m);
    for (int i=0; i<m; ++i){ cin >> b[i].first; b[i].second = i;}  
    
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    vector<int> ans(m);
    int i=0;

    for (int j=0; j<m; ++j){
        while (i<n && a[i] <= b[j].first){ i++; }
        ans[b[j].second] = i;
    }

    for (int ii = 0; ii < m; ++ii){
        cout << ans[ii] << (ii == m-1 ? "" : " ");
    }
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
}
