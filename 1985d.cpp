#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int t; cin >> t;
	while(t--){
	    int a, b; cin >> a >> b;
	    vector<vector<char>> matrixx(a, vector<char>(b));
	    for (int i=0; i<a; ++i){
	        for (int j=0; j<b; ++j){cin >> matrixx[i][j];}
	    }
	    int min_r = 1e9, max_r = -1; int min_c = 1e9, max_c = -1;
        
        for (int i=0; i<a; ++i){
            for (int j=0; j<b; ++j){
                if (matrixx[i][j] == '#'){
                min_r = min(min_r, i + 1);
                max_r = max(max_r, i + 1);
                min_c = min(min_c, j + 1);
                max_c = max(max_c, j + 1);
            }}
        }
        cout << (min_r+max_r)/2 << " " << (min_c+max_c)/2; cout << '\n';
	}
	return 0;

}
