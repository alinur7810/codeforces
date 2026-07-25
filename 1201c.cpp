#include <bits/stdc++.h>

using namespace std;
long long n;
long long k;
vector < long long > a;
bool check(long long x) {
    long long capacity = 0;
    for (long long i = n / 2; i < n; ++i) {
        if (a[i] < x) {
            capacity += x - a[i];
        }
        if (capacity > k) {
            return false;
        }
    }

    return capacity <= k;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    a.resize(n);
    for (long long i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
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
    cout << ans;

}