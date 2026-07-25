#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    vector<int> v(n);
    for (auto &i : v){cin >> i;}
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    int sum = accumulate(v.begin(), v.end(),0);
    int me = 0;
    int ans;
    for (int i=0; i<n; ++i){
        me+=v[i];
        ans++;
        if (me > sum-me) break;
    }
    cout << ans;
    
    
}