#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        int ccount=0;
        for (int i=0; i<n; i++){
            cin >> v[i];
            if (v[i] % 2 == 0){
                ccount += 1;
            }
        }
        if (ccount == 0 || ccount == n){
            for (int i : v){
                cout << i << ' ';
            } 
        }else{
            sort(v.begin(), v.end());
            for (int i : v){
                cout << i << ' ';
            } 
            
        }
        cout << '\n';
    }
    return 0;
}