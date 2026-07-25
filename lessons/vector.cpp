#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v; // Пустой вектор
    vector<int> v1(10); // Вектор из 10 элементов, заполненных нулями
    vector<int> v2(10, 5); // 10 элементов, каждый равен 5
    vector<int> v3 = {1, 2, 3}; // Инициализация списком

    v.push_back() // Вставить значение в конец вектора

    // Ввод значений в векторе
    for (int i=0; i < n; ++i ){
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    // Либо, если у нас известен размер заранее 
    for (int i=0; i<n; ++i){
        cin >> v[i];
    }
}