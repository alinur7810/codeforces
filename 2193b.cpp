#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; 
    cin >> n;
    vector<int> a(n);
    for (int &i : a) cin >> i;
    int i = 0;
    while (i < n && a[i] == n - i) {
        i++;
    }

    if (i < n) {
        int tg= n - i; 
        int r = i;
        for (int k = i; k < n; k++) {
            if (a[k] == tg) {
                r = k;
                break;
            }
        }
        reverse(a.begin() + i, a.begin() + r + 1);
    }

    for (int j = 0; j < n; ++j) {
        cout << a[j] << (j == n - 1 ? "" : " ");
    }
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; 
    cin >> t;
    while (t--) {
        solve();
    }
}