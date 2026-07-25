#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 3, b = 6;

    double res1 = a / b;          // Ошибка логики: выдаст 0
    double res2 = (double)a / b;  // Правильно: выдаст 0.5
    double res3 = a * 1.0 / b;    // Альтернатива: выдаст 0.5
}