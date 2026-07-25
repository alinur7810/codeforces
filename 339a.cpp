#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int v[4]={0};
    string s; cin >> s;
    for (char x : s){
        if (x == '1') v[1]++;
        else if (x == '2') v[2]++;
        else if (x == '3') v[3]++;
    }
    
    bool frst = true;
    
    for (int j=1; j<=3; ++j){
        for (int i=0; i<v[j]; ++i){
            if (!frst) cout << '+';
            cout << j;
            frst = false;
            
        }
        
    }
    
    
    
    return 0;
}