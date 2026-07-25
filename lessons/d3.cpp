#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 5;
    double pi = 3.1415926535;

    // Включаем фиксированную точность в 3 знака
    cout << fixed << setprecision(3);

    cout << pi << '\n'; // Выведет 3.142 (последняя цифра округляется)
    cout << a << '\n';  // Выведет 5 (на int это не влияет)

    // Изменяем точность без fixed
    cout << setprecision(1);
    cout << pi << '\n'; // Выведет 3.1

    // Слишком большой setprecision
    cout << setprecision(50);
	long double a = 10.0, b = 3.0;
	cout << a/b;
    // Выведет 3.33333333333333333326105318850096637106616981327534
}