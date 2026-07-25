#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	set<char> alhpabet;
	int n; cin >> n;
	string word; cin >> word;
	for (int i=0; i<n; ++i){
	    alhpabet.insert(tolower(word[i]));
	}
	if (alhpabet.size()==26) cout << "YES";
	else cout << "NO";
}
