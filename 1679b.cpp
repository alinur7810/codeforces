#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, q; cin >> n >> q;
    vector<long long> p(n+1, 0); 
    vector<long long> a(n+1, 0);
    
    for (long long i=1; i<=n; ++i){
        cin >> p[i];
    }
    sort(p.begin()+1, p.end(), greater<long long>());
    for (long long i=1; i<=n; ++i){
        a[i] = a[i-1] + p[i];
    }
    
    for (long long i=0; i<q; ++i){
        long long x, y; cin >> x >> y;
        cout << a[x]-a[x-y] << '\n';
    }
}