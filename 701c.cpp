#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    set<char> ss(s.begin(), s.end());
    int uniq = ss.size();
    
    int l=0, minLength = 1e9; int isUniq=0;
    map<int, int> m;
    for (int r=0; r<n; ++r){
        m[s[r]]++;
        if (m[s[r]]==1) isUniq++;
        while (uniq==isUniq){
            minLength = min(minLength, r-l+1);
            m[s[l]]--;
            if (m[s[l]] == 0) isUniq--;
            l++;
        }
    }
    cout << minLength;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	
	solve();
	

}
