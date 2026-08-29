#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<ll, ll>;

#define all(v) (v).begin(), (v).end()
#define pb push_back
#define sz(x) (int)(x).size()
#define nl '\n'
#define nah cout << "NO\n"
#define yeah cout << "YES\n"
#define lol cout << '\n'

void solve() {  
    int n, m; cin >> n >> m;
    vi v(n);
    map<int, int> ma;
    
    for (int i=0; i<n; ++i){
        cin >> v[i];
        ma[v[i]]++;
    }
    vector<pair<int, int>> maa(ma.begin(), ma.end());
    sort(maa.begin(), maa.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        if (a.second != b.second) {
            return a.second > b.second; 
        }
        return a.first > b.first; 
    });
    int c=0;
    int c1 = maa[0].second*2;
    int mm = maa[0].first /2;

    for (auto &i : v){
        int t = i;
        if (t==mm){
            c++;
        }
        else if (t>mm && t !=maa[0].first){
            c++;
        }
    }
    c+=c1;
    int C=0;
    
    
    sort(maa.begin(), maa.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        if (a.second != b.second) {
            return a.second < b.second; 
        }
        return a.first > b.first; 
    });
    int aa = maa[0].first;
    int bb = maa[0].second;
    for (auto &i : v){
        if (i==aa){
            C++;
        }else if (i>aa){
            C++;
        }else if (i == aa*2){
            C+=2;
        }
    }
    if (!(ma.size() == 1 && ma.begin()->first == 1)) {
        cout << max(c, C);
        lol;
    }else{
        cout << n;
        lol;
    }
    
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin); 
    #endif

    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}