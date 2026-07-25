#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--){
	    int n; cin>>n;
	    vector<int> v(n);
	    for (auto &i : v){cin>>i;}
	    bool isSorted = true;
	    for(int i=0; i<n-1;++i){
	        if (v[i]>v[i+1]){
	            isSorted=false;
	            break;
	        }
	    }
	    if (isSorted) cout << n;
	    else cout << 1;
	    cout << '\n';
	}
	    

}
