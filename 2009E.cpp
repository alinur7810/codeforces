#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int t; cin >> t;
	while(t--){
	    long long n, k; cin >> n >> k;
	    long long sum = ((k*2+n-1)*n)/2;
	    auto L = [&](long long x){
	        return ((2*k + x-1)*x)/2;
	    };
	    auto R = [&](long long x){
	        return sum - L(x);
	    };
	    long long low = 1;
	    long long high = n;
	    long long best = 1;
	    while (low <= high){
	        long long mid = low +(high-low)/2;
	        
	        if( L(mid) >= R(mid) ){
	            best = mid;
	            high = mid-1;
	        }else{
	            low = mid+1;
	        }
	    }
	    long long ans1 = abs(L(best)-R(best));
	    if (best>1){
	        long long ans2 = abs(L(best-1)-R(best-1));
	        cout << min(ans1, ans2) << '\n';
	    }else{
	        cout << ans1 << '\n';
	    }
	    
	}

}
