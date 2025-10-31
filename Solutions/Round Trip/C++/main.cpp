// Problem: Round Trip
// Link to the problem: https://codeforces.com/contest/2161/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll r0, x, d, n;
    cin >> r0 >> x >> d >> n;
    string s;
    cin >> s;
    ll ans = 0;
    ll prev = r0;
    for (int i = 0; i < n; i++)
    {
        bool z = false;
        if (s[i] == '1')
        {
            z = true;
            ans++;
        }
        else
        {
            if (r0 < x)
            {
                z = true;
                ans++;
            }
        }

        if (z)
        {
            ll target = x - 1;
            if (r0 < target)
            {
                r0 = min(r0 + d, target);
            }
            else if (r0 > target)
            {
                r0 = max(0LL, max(r0 - d, target));
            }
        }
    }
    cout << ans << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}