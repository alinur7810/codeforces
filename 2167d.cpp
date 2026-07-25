#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> v(n);
        for (int i=0; i<n; i++){
            cin >> v[i];
        }
        int ans;
        bool isbreak=false;
        for (int i=2; i<1e3; i++){
            for (int j=0; j<n; ++j){
            if ( gcd(i, v[j]) == 1){
                ans = i;
                isbreak = true;
                if (isbreak==true){
                    break;
                }
            }else{
                ans = -1;
            }
        }
        if(isbreak){
            break;
        }
        }
        
        cout << ans << '\n';
    }
    return 0;
}