#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int t; cin >> t;
	while(t--){
	    int n, q; cin >> n >> q;
	    string a, b; cin >> a; cin >> b;
	    
	    a = ' ' + a; b = ' ' + b;
	    vector<vector<int>> ap(26, vector<int>(n+1, 0));
	    vector<vector<int>> bp(26, vector<int>(n+1, 0));
	    
	    for (int i=1; i<=n; ++i){
	        for (int c=0; c<26; ++c){
	            ap[c][i] = ap[c][i-1];
	            bp[c][i] = bp[c][i-1];
	            
	        }
	        
	        int chara = a[i] -'a'; int charb = b[i]-'a';
	        
	        ap[chara][i]++; bp[charb][i]++;
	        
	    }
	    
	    for (int i=0; i<q; ++i){
	        int l, r; cin >> l >> r;
	        int changes = 0;
	        for (int i=0; i<26; ++i){
	            int As = ap[i][r]-ap[i][l-1];
	            int Bs = bp[i][r]-bp[i][l-1];
	            
	            if (Bs > As){
	                changes += (Bs-As);
	            }
	        }
	        cout << changes << '\n';
	    }
	    
	}

}
