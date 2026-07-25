#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int n, k; cin >> n >> k;
	vector<int> v(n+1, 0);
	vector<int> p(n+1, 0);
	for(int i=1; i<=n; ++i){
	    cin >> v[i];
	    p[i] = p[i-1]+v[i];
	}
    long long minn = 6969696969;
    int ans = 0;
    for (int i=1; i<=n-k+1; ++i){
        long long currmin = p[i+k-1]-p[i-1];
        
        if (currmin < minn){
            minn = min(minn, currmin);
            ans = i;
        }
    }
    cout << ans;
}
