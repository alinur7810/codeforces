#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector <int> v(n);
        for (auto &i : v){
            cin >> i;
        }
        sort(v.begin(), v.end());
        if (v[n-1] == 67){
            cout << "YES";
        }else{
            cout << "NO";
        }
        cout << '\n';
    }
    return 0;
}