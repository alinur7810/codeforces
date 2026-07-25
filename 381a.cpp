#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	vector<int> v(n);
	for (auto &i : v){cin >> i;}
	int L = 0;
	int R = n-1;
	int s=0; int d=0;
	for (int i=0; L<=R; ++i){
	    int a;
	    if (v[L]>v[R]){
	        a = v[L];
	        L++;
	    }else{
	        a = v[R];
	        R--;
	    }
	    
	    if (i%2==0){
	        s += a;
	    }else{
	        d += a;
	    }
	    
	}
	cout << s << ' ' << d;
	
}
