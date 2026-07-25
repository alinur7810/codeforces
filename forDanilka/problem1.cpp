#include <bits/stdc++.h>
using namespace std;

int main() {

	int t; cin >> t;
	while(t--){
	    int x, y; cin >> x >> y;
	    bool thrd = (x+y)%3==0;
	    bool fst = x >= 2*y;
	    bool scnd = x >= -4*y;
	    
	    if (thrd && fst && scnd){
	        cout << "YES";
	    }else{
	        cout << "NO";
	    }
	    cout << '\n';
	}

}
