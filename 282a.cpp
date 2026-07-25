#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	int x = 0;
	while(t--){
	    string s; cin >> s;
	    
	    if (s[1] == '+') x += 1;
        else x -= 1;
        
	}
	cout << x;
    cout << '\n';
	return 0;

}
