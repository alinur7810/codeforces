#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    // Обьявили переменную снаружи, чтобы иметь к ней доступ всегда
    long long result = 1;
    for (int i = 1; i <= b; i++) {
        result = result * a;
    }

    cout << result << '\n';

    // Если обьявим внутри цикла:
    // Во первых, мы не будем иметь доступ к переменной снаржуи цикла
    // Во вторых, зачение каждый раз будет перезаписываться
    for (int i = 1; i <= b; i++) {
        long long result = 1;
        result = result * a; // Старое значение будет заменяться на новое
    }

    cout << result << '\n'; // Вызовет ошибку, ведь не имеем к ней доступа

}