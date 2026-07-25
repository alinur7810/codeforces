#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k, d; cin >> n >> k >> d;
    vector<int> a(n); for (auto &i : a){ cin >> i; }
    
    
    int l=0, minD=1e9, unq=0;
    map<int, int> cnt;
    
    for (int r=0; r<n; ++r){
        cnt[a[r]]++;
        if (cnt[a[r]] == 1) unq++;
        
        if (r-l+1 > d){
            cnt[a[l]]--;
            if (cnt[a[l]]==0) unq--;
            l++;
            
        }
        if (r-l+1 == d){
            minD = min(minD, unq);
        }
    }
    cout << minD << '\n';
    
    
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); 
	int t; cin >> t;
	while(t--){
	    solve();
	}

}
