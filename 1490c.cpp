#include <bits/stdc++.h>

using namespace std;

void solve() {
    long long x;
    cin >> x;
    long long root = 2*ceil(pow(x, 0.33));
    vector < long long > cubes(2 * root);
    long long i = 1;
    while (i <= root) {
        cubes[i - 1] = i * i * i;
        cubes[2 * root - i] = i * i * i;
        i += 1;
    }
    sort(cubes.begin(), cubes.end());
    long long l = 0, r = 2 * root - 1;
    bool found = false;

    while (l <= r) {
        long long curr_sum = cubes[l] + cubes[r];
        if (curr_sum == x) {
            found = true;
            break;
        } else if (curr_sum > x) {
            r--;
        } else {
            l++;
        }
    }
    if (found) cout << "YES\n";
    else cout << "NO\n";
    
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