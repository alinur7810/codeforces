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
	    int counts[26]={0};
	    string s = "";
	    for (int i=0; i<n; ++i){
	        
	        for (int j=0; j<26; ++j){
	            if (counts[j] == v[i]){
	                char c = 'a' + j;
	                s+=c;
	                counts[j]++;  
	                break;
	            }
	        }
	    }
	    cout << s << '\n';
	}
}
