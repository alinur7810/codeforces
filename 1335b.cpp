#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        int n, a, b;
        string alp = "qwertyuiopasdfghjklzxcvbnm";
        cin >> n >> a >> b;
        vector<char> bs(b);
        string as = "";
        for (int i=0; i<b; i++){bs[i] = alp[i];}
        int i=0;
        while (as.size() != n){
            as += bs[i];
            i++;
            if (i==b){i=0;};
        }
        cout << as << '\n';
    }
    
    
    return 0;
}