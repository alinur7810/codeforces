#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, a, b;
        cin >> n >> a >> b;
        int ans = (n / 2)*b+ (n%2)*a;
        if ( n*a > ans){
            cout << ans << endl;
        }else{
            cout << n*a << endl;
        }
    
    }
    return 0;
}