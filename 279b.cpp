#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

    int n, t; cin >> n >> t;
    vector<long long> v(n+1);
    vector<long long> V=v;
    
    for (int i=1; i<=n; ++i){
        cin >> v[i];
        V[i]=V[i-1]+v[i];
    }
    long long maxbooks = -1;
    for (int i=1; i<=n; ++i){
        auto ub = upper_bound(V.begin()+i, V.end(), t + V[i - 1]);
        long long UB = ub-V.begin();
        long long j = UB-1;
        maxbooks = max(maxbooks, j-i+1);
    }
    
    
    cout << maxbooks;
}
