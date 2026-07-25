#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int n; cin >> n;
	vector<int> v(n+1, 0);
	for (int i=1; i<=n; ++i){
	    cin >> v[i];
	}
	
	int q; cin >> q;
	sort(v.begin()+1, v.end());
	for (int i=0; i<q; ++i){
	    int m;
	    cin >> m;
	    auto it = upper_bound(v.begin()+1, v.end(), m);
	    cout << it - v.begin() - 1 << '\n';
	    
	}
}
