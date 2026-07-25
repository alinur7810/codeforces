#include <bits/stdc++.h>
using namespace std;

string s;
int n;

int fun(string ss){
    int a;
    bool f = 0, sc = 0;
	int cans=0;
	// 00
	for (int i=n-1; i>=0; i--){
	    if (f != 1){
	        if (s[i] == ss[1]) f = 1;
	        else cans++;
	    }
	    else{
	        if ( s[i] == ss[0] ){
	            sc = 1;
	            break;
	        }
	        else{
	            cans++;
	        }
	    }
	}
	if (sc == 0){
	    a = 1e5+69;
	}else{
	    a = cans;
	}
	return a;
}

void solve(){
    cin >> s;
	n = s.size();
	int a, b, c, d;
	a = fun("00");
	b = fun("25");
	c = fun("50");
	d = fun("75");
	
	vector<int> arr = {a, b, c, d};
	cout << *min_element(arr.begin(), arr.end()) << '\n';
	
}

int main() {
	int t; cin >> t;
	while(t--) solve();
}
