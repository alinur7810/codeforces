#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int t; cin >> t;
	while(t--){
	    int n; cin >> n;
	    vector<int> v(n);
	    map<int, int> m;
	    for (auto &i : v){cin >> i;}
	    for( auto &i : v){
	            m[i]++;
	    }
	    int max = *max_element(v.begin(), v.end());
	    cout << m[max] << '\n';
	    
	}

}
