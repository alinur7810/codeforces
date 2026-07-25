#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
	vector<int> m(2e6, 0); 
	vector<int> v(n); 
	for (int i=0; i<n; ++i){ 
	    cin >> v[i]; 
	    m[v[i]]++; 
	    if (m[v[i]] == 3){
	        cout << "NO";
	        return;
	    }
	    
	}
	
	vector<int> up;
	vector<int> down;
	
	for (int i=0; i<2e5+1; ++i){
	    if (m[i] > 0){
	        up.push_back(i);
	        m[i]--;
	    }
	}
	
	for (int i=0; i<2e5+1; ++i){
	    if (m[i] > 0){
	        down.push_back(i);
	        m[i]--;
	    }
	}
	
	sort(up.begin(), up.end(), [](int i, int j){
	    return i > j;
	});
	
	cout << "YES" << '\n';
	cout << down.size() << '\n';
	for (int i=0; i<down.size(); ++i){
	    cout << down[i] << ' ';
	}
	cout << '\n';
	cout << up.size() << '\n';
	for (int i=0; i<up.size(); ++i){
	    cout << up[i] << ' ';
	}
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}
