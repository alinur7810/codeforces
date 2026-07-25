#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int n; cin >> n;
	vector<long long> a(n+1, 0);
	vector<long long> evenA = a;
	vector<long long> oddA = a;
	
	for (int i=1; i<=n; ++i){
	    cin >> a[i];
	    evenA[i] = evenA[i-1];
        oddA[i] = oddA[i-1];
	    if ( i%2==0){
	        evenA[i] = evenA[i-1]+a[i];
	    }else{
	        oddA[i] = oddA[i-1]+a[i];
	    }
	}
	int ans = 0;
	for (int i=1; i<=n; ++i){
	    long long newEvenSum = evenA[i] - evenA[0] + oddA[n]-oddA[i-1];
	    long long newOddSum = oddA[i] - oddA[0] + evenA[n]-evenA[i-1];
	    if ( newOddSum == newEvenSum ){
	        ans++;
	    }
	}
	cout << ans;
}
