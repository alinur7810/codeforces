#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const ll maxcubes = 1e12;
vector < ll > cubes;
void veccubes() {
    for (ll i = 1; i * i * i <= maxcubes; ++i) {
        cubes.push_back(i * i * i);
    }
}

void solve() {
    ll x;
    cin >> x;
    ll l = 0, r = cubes.size() - 1;

    while (l <= r) {
        ll curr_sum = cubes[l] + cubes[r];

        if (curr_sum == x) {
            cout << "YES\n";
            return;
        }
        else if (curr_sum < x) {
            l++;
        }
        else {
            r--;
        }
    }
    cout << "NO\n";

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    veccubes();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }


}