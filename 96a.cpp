#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;

    int curr_len = 1;
    int max_len = 1;

    for (int i = 1; i <= s.size(); ++i) {
        if (s[i - 1] == s[i]) {
            curr_len++;
            if (curr_len >= 7) {
                cout << "YES";
                return 0;
            }
        } else {
            curr_len = 1;
        }
    }
    cout << "NO";
}