#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t; cin >> t;
	while(t--){
    	    int l, r; cin >> l >> r;
    	    long long counts = 1;
    	    long long diff = 1;
    	    while( l+diff <= r){
    	        l+=diff;
    	        diff++;
    	        counts++;
    	    }
    	    cout << counts << '\n';
	    
	}
}