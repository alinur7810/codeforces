#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        long long x;
        cin >> x;
        bool ali = false;
        
        for (long long i = x; i<x+228; ++i ){
            int summ = 0;
            int j = i;
            while(j>0){
                summ +=  j%10;
                j/=10;
            }
            if (i - summ == x){
                ali = true;
                break;
            }
        }
        if (ali){
            cout << 10;
        }else{
            cout << 0;
        }
        cout << '\n';
    }

    return 0;
}