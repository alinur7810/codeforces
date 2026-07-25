#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t; cin >> t;
	while(t--){
	    int l, r; cin >> l >> r;
	    vector<long long> v;
	    int i=0;
	    for (int j=l; j<=r; j=j+i){
	        v.push_back(j);
	        i += 1;
	    }
	    cout << v.size();
	    cout << '\n';
	}
}