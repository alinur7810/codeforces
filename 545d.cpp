#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n; cin >> n;
    vector<int> v(n); for (auto &i : v){ cin >> i; }
    sort(v.begin(), v.end());
    
    queue<int> q;
    for (int x : v) q.push(x);
    ll currWait = 0;
    int ans = 0;
    while (!q.empty()){
        int pat = q.front();
        q.pop();
        
        if ( pat >=currWait ){
            ++ans;
            currWait+=pat;
        }
        
    }
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	solve();
	

}
