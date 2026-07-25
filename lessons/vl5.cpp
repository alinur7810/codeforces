#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n; // Вводим длину массива
    // 1 способ
    vector<int> v; 

    for (int i=0; i<n; ++i){
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    // 2 способ
    vector<int> v(n); 
    for (int i=0; i<n; ++i){
        cin >> v[i]; 
    }

    vector<int> v(n); 
    // 3 способ range-based
    for (auto &i : v){
        cin >> i; 
    }
}