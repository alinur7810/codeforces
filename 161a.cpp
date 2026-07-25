#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n, m, x, y; cin >> n >> m >> x >> y;
    vector<int> a(n); for (auto &i : a){ cin >> i; }
    vector<int> b(m); for (auto &i : b){ cin >> i; }
    
    int i=0, j=0;
    vector<int> answers;
    while(i < n && j < m){
        if ( (a[i] - x <= b[j]) && (b[j] <= a[i]+y)){
            answers.push_back(i+1); answers.push_back(j+1);
            i++; j++;
        }
        else if ( b[j] < a[i] - x ) j++;
        else i++;
    }
    int size = answers.size();
    cout << size/2 << '\n';
    for (int i=0; i<size; ++i){
        if (i % 2 == 0 && i != 0) cout << '\n';
        cout << answers[i] << ' ';
    }

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
}
