#include <bits/stdc++.h>
using namespace std;

int main() {
    // --- CHAR ---
    // Ровно один символ. Строго одинарные кавычки ' '
    char c = 'c';    // ОК
    char c1 = "c";  // Ошибка: " " - это для типа string
    char c2 = 'cc'; // Ошибка: больше одного символа

    // Сравнение тоже через одинарные кавычки
    if (c == 'c') cout << "char\n"; // Ок
    if (c == "c") // Ошибка
}