#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30};
    // Способ 1: Классический цикл по индексам
    for (int i = 0; i < v.size(); ++i) {
        v[i] += 5; 
    }
    // Способ 2: Range based цикл (по самим значениям)
    for (auto &i : v) {
        i += 5; 
    }
    // Способ 3: Range-based только для чтения
    for (auto &i : v) {
        cout << i << " "; 
    }
}