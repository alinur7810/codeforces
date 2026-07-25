#include <bits/stdc++.h>
using namespace std;
#define pb push_back

vector<int> v;
int n;
void even(){
    for (int i=1; i<=n; ++i){
        v.pb(i);
    }
}

void odd(){
    v.pb(n-1); v.pb(n);
    int c=1;
    while (v.size() < 4*n){
        v.pb(c);
        c++;
    }
    if (n>= 7){
        int blyatInd = 3 * n + 1 + (n + 3) / 2;
    swap(v[blyatInd], v[blyatInd-1]);
    }
    
}

void solve(){
	cin >> n;
	
	
	for (int i=1; i<=n; ++i){
	    v.pb(i);
	}
	
	for (int i=1; i<=n; ++i){
	    for (int j =0; j<2; ++j){
	        v.pb(i);
	    }
	}
	
	if (!(n&1)) even();
	else odd();
	
	for (auto &i : v){
	    cout << i << ' ';
	}
	cout << '\n';
	v.clear();
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t; cin >> t;
	while(t--) solve();

}
