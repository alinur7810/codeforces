#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int t; cin >> t;
	while(t--){
	    int n, k; cin >> n >> k;
	    vector<long long> v(n+1, 0);
	    vector<long long> peak=v;
	    vector<long long> Peak = peak;
	    for (int i=1; i<=n; ++i){ cin >> v[i]; }
	    for (int i=1; i<=n; ++i){
	        if ( v[i] > v[i-1] && v[i] > v[i+1] ){
	            peak[i] = 1;
	        }
	        Peak[i] = Peak[i-1]+peak[i];
	    }
	    long long maxpeak = -1;
	    int LL = 0 ;
	    for (int i=1; i<=n-k+1; ++i){
	        int L = i;
	        int R = L+k-1;
	        long long currpeak = Peak[R-1]-Peak[L];
	        
	        if (maxpeak < currpeak){
	            maxpeak = max(maxpeak, currpeak);
	            LL = L;
	        }
	    }
	    cout << maxpeak+1 << ' ' << LL << '\n';
	}
}
