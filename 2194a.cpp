#include <vector>
#include <iostream>
using namespace std;

int main(){
    int t; cin >> t;
    vector<int> v;
    for (int i=t; i > 0; i--){
        int n, w;
        cin >> n >> w;
        v.push_back(n - n/w);
    }
    for (int i : v){
        cout << i << '\n';
    }
}