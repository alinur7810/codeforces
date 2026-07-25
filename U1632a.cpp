#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int tt; cin >> tt;
	while (tt--){
	    int n; cin >> n; string s; cin >> s;
	    cout << ((n==1 || (n==2 && s[0] != s[1]) ) ? "YES" : "NO");
	    cout << '\n';
	}

}
