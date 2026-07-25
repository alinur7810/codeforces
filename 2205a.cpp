#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int t; cin >> t;
	while(t--){
	    int n; cin >> n;
	    vector<int> v(n);
	    for (auto &i : v){cin >> i;}
	    int me = *max_element(v.begin(), v.end());
	    int me_index;
	    for ( int i=0; i < n; ++i){
	        if (v[i]==me){
	            me_index = i;
	            break;
	        }
	    }
	    swap(v[0], v[me_index]);
	    for (auto &i : v){cout << i << ' ';}
	    cout << '\n';
	}

}
