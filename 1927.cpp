#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n;
        cin >> s;
        int fn = s.find('B');
        int sn = s.rfind('B');
        cout << sn - fn + 1 << endl;
    }
    return 0;
}