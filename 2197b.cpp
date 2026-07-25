#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        vector<int> v1(n);
        vector<int> v2(n);
        for (auto &i : v1){cin >> i;}
        for (auto &i : v2){cin >> i;}
        vector<bool> ali(n, false);
        
        for (int i=0; i<n; ++i){
            if (v1[i]==v2[i]){ali[i] = true;}
            if (i > 0 && v2[i] == v1[i-1]){ali[i]= true;}
            if (i < n-1 && v2[i] == v1[i+1]){ali[i]= true;}
        }
        for (int i=1; i<n; i++){
            if (v2[i]==v2[i-1] && ali[i-1]== true){ali[i]=true;}
        }
        for (int i = n-2; i>=0; i--){
            if (v2[i]==v2[i+1] && ali[i+1]== true){ali[i]=true;}
        }
        bool alinur = true;
        for (bool nur : ali){
            if (nur != true){alinur = false;}
        }
        if (alinur){cout << "YES";}else{cout << "NO";}
        cout << '\n';
    }
    return 0;
}