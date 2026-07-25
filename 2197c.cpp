#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        long long p, q;
        cin >> p >> q;
        if (double(p)/q ==2/3 ){
            cout << "Bob" << '\n';
        }else{
            if (p == q){
                cout << "Alice" << '\n';
            }else if(p > q){
                cout << "Bob" << '\n';
            }
        }
    }

    return 0;
}