#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int t; cin >> t;
	while(t--){
	    int n; long long f, a, b; cin >> n >> f >> a >> b;
	    vector<int> m(n); for (auto &i : m){cin >> i;}
	    
	    long long tim = 0;
 	    bool isCharged = true;
 	    long long spentTime=0;
	    for (int i=0; i<n; ++i){
	        f -= min(a*(m[i]-tim), b);
	        tim = m[i];
	        if (f<=0){
	            isCharged = false;
	            break;
	        }
	    }
	    if (isCharged){
	        cout << "YES";
	    }else{
	        cout << "NO";
	    }
	    cout << '\n';
	}
	return 0;

}
