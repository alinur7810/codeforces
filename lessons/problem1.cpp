#include <iostream>
using namespace std;

int main() {
    int n;
    long long f = 1; // Может быть очень большим числом
    cin >> n;
    // Умножаем от 1 вплоть до n
    for (int i = 1; i <= n; i++) {
        f *= i; 
    }
    cout << f << '\n';
    // Пример n=5:
    // 1*2*3*4*5, вывод: 120
}