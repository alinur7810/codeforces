#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<double> v(n);
    long long sum = 0;
    for (auto &i : v){
        cin >> i;
        
    }
    vector<double> nv;
    for (auto &i : v){
        if ( i > -273.15){
            nv.push_back(i);
            sum += i;
        }
    }
    
    for (auto &i : nv){
        cout << i << ' ';
    }
    cout << '\n' << floor(sum/nv.size());

}
