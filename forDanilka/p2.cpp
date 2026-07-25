#include <bits/stdc++.h>
using namespace std;

int main() {
    int price; // цена
    int quantity; // количество

    cin >> price >> quantity;
    int total = price * quantity;

    cout << total << '\n';
    
    // Другой вариант

    int price, quantity; // Обьявили вместе, через запятую
    cin >> price >> quantity;

    int total = price * quantity;

    cout << total << '\n';
}