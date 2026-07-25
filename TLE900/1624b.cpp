#include <bits/stdc++.h>

using namespace std;

void solve() {
    int a, b, c;
    cin >> a >> b >> c;

    bool C = (
        (2 * b - a) > 0 && (2 * b - a) % c == 0  
    );
    bool B = (
        (a + c) % 2 == 0 && ((a+c)/2) % b == 0 
    );
    bool A = (
        (2 * b - c) % a == 0 && (2 * b - c) > 0
    );
    if (A || B || C) {
        cout << "YES\n";
        return;
    }
    else {
        cout << "NO\n";
        return;
    }




}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

}