#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, d; cin >> n >> d;
    vector<int> v(n); for (auto &i : v){ cin >> i; }
    int l=0;
    long long threes=0;
    for (int r=0; r<n; ++r){
        while ( v[r]-v[l] > d ){
            l++;
        }
        long long len = r-l;
        threes += len*(len-1)/2;
    }
    cout << threes;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	
	solve();
	

}   
