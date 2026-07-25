#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    map<char, int> m;
    for (auto i : s)
    {
        m[i]++;
    }
    int odds = 0;
    int d = 0;
    for (auto &i : m)
    {
        if ( i.second % 2 != 0 )
        {
            odds++;
        }
    }
    if (odds - 1 <= k)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();

}
