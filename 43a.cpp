#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	map<string, int> m;
	int n; cin >> n;
	for (int i=0; i<n; ++i){
	    string team; cin >> team;
	    m[team]++;
	}
	string winner;
	int max_s = 0;
	for (auto &i : m){
	    if (i.second > max_s){
	        max_s = i.second;
	        winner = i.first;
	    }
	}
	cout << winner;
}
