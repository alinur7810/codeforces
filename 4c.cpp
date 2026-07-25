#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int t; cin >> t;
	map<string, int> m;
	while(t--){
	    string s; cin >> s;
	    if (m[s] == 0){
	        cout << "OK";
	        m[s]++;
	       }else{
	           cout << s << m[s];
	           m[s]++;
	           } 
	           cout <<'\n';
	}
	return 0;

}
