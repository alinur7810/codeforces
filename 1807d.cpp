#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t; cin >> t;
	while(t--){
	    int n, q; cin >> n >> q;
	    vector<long long> a(n+1, 0);
	    vector<long long> v = a;
	    for (int i=1; i<=n; ++i){
	        cin >> a[i];
	        v[i] = v[i-1] + a[i];
	    }
	    
	    for (int i=0; i<q; ++i){
	        int l, r, k; cin >> l >> r >> k;
	        long long lrsum = v[r]-v[l-1];
	        long long totalsum = v[n];
	        long long summ = totalsum - lrsum;
	        long long newsum = summ + (r-l+1)*k;
	        if (newsum % 2 != 0){
	            cout << "YES";
	        }else{
	            cout << "NO";
	        }
	        cout << '\n';
	    }
	    
	}
}
