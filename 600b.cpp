#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m; cin >> n >> m;
    vector<long long> a(n+1);
    vector<long long> b(m+1);
    for (int i=1; i<=n; ++i){
        cin >> a[i];
    }
    
    for (int i=1; i<=m; ++i){
        cin >> b[i];
    }
    sort(a.begin()+1, a.end());
    for (int i = 1; i<=m; ++i){
        auto it = upper_bound(a.begin()+1, a.end(), b[i]);
        int ans = it - a.begin() - 1;
        cout << ans << ' ';
    }
}
