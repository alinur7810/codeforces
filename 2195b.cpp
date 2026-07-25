#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> v(n);
        bool alinur = true;
        for (int i = 0; i<n; ++i){ 
            cin >> v[i];
            int ali = i+1;
            int nur = v[i];
            while(ali%2==0){
                ali /= 2;
            }
            while(nur%2==0){
                nur /= 2;
            }
            if (ali != nur) alinur = false;
        }
        if (alinur){
            cout << "YES";
        }else{
            cout << "NO";
        }
        cout << '\n';
        
    }
    return 0;
}