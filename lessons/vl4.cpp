#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30};

    v.push_back(40);     // Добавляет 40 в самый конец
    v.pop_back();        // Удаляет последний элемент
    v.clear();           // Удаляет вообще все элементы
    v.resize(10);        // Меняет размер до 10 элементов, новые станут 0

    int s = v.size();    // Возвращает количество элементов
    bool e = v.empty();  // Возвращает true, если вектор пуст, иначе false

    int f = v.front();   // Возвращает первый элемент (v[0])
    int b = v.back();    // Возвращает последний элемент (v[v.size() - 1])

    
    sort(v.begin(), v.end());    // Сортировка по возрастанию
    reverse(v.begin(), v.end()); // Переворот вектора

    return 0;
}