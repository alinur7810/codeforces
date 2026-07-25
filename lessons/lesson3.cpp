#include <bits/stdc++.h>;
using namespace std;
// Задача из acmp - Арифметика
// Если произведение первых двух чисел равна третьему числу - вывести YES
int main(){
    int A, B, C;
    cin >> A >> B >> C;
    if ( A*B == C){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}