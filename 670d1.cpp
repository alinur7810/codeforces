#include <bits/stdc++.h>

using namespace std;
int n;
long long k;
vector < int > a, b;
bool check(long long x) {
    long long needk = 0;
    for (int i = 0; i < n; ++i) {
        long long required = x * a[i];
        if (required > b[i]) {
            needk += x * a[i] - b[i];
        }


        if (needk > k) {
            return false;
        }

    }
    return needk <= k;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    a.resize(n);
    b.resize(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }

    long long l = 0, r = 2e9, ans = 0;

    while (l <= r) {
        long long mid = l + (r - l) / 2;

        if (check(mid)) {
            ans = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    cout << ans << '\n';

}