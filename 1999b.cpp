#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--){
	    int a1, a2, b1, b2;
	    cin >> a1 >> a2 >> b1 >> b2;
	    
	    vector<int> sunit = {a1, a2};
	    vector<int> slava = {b1, b2};
	    
	    
	    int winner = 0;
	    for (int i=0; i<2; ++i){
	        for (int j=0; j<2; ++j){
	            int su_co = 0, sl_co = 0;
	            if (sunit[i] > slava[j]) su_co++;
	            else if(sunit[i] < slava[j]) sl_co++;
	            
	            if (sunit[1-i] > slava[1-j]) su_co++;
	            else if(sunit[1-i] < slava[1-j]) sl_co++;
	            
	            if (su_co > sl_co){
	                winner++;
	                
	            }
	        }
	    }
	   
	    cout << winner << '\n';
	
	}
}
