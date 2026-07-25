#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int t; cin >> t;
	while(t--){
	    int n, k; cin >> n >> k;
	    vector<int> v(n);
	    for (auto &i:v){cin >> i;}
	    sort(v.begin(), v.end());
	    int clen = 1, maxlen = 1;
	    for (int i=1; i<n; ++i){
	        if ( abs(v[i-1] - v[i]) <= k ){
	            clen++;    
	        }else{
	            maxlen = max(maxlen, clen);
	            clen = 1;
	        }
	    }
	    maxlen = max(maxlen, clen);
	    cout << n-maxlen<< '\n';
	}
}
