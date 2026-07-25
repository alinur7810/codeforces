#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    
    long long power = 0;
    
    priority_queue<int> pq;
    
    for (int i=0; i<n; ++i){
        int k; cin >> k;
        if ( k > 0 ) pq.push(k);
        if ( k == 0 ){
            if ( !pq.empty() ){
            int temp = pq.top();
            power += temp;
            pq.pop();
        }
        }
    }
    
    cout << power << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int t; cin >> t;
	while(t--){
	    solve();
	}

}
