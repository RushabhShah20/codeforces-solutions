// Problem: Divisibility by Eight
// Link to the problem: https://codeforces.com/contest/550/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    for (ll i = 0; i < n; i++)
    {
        const ll ans = s[i] - '0';
        if (ans % 8 == 0)
        {
            cout << "YES" << endl;
            cout << ans << endl;
            return;
        }
    }
    for (ll i = 0; i < n; i++)
    {
        for (ll j = i + 1; j < n; j++)
        {
            const ll ans = (s[i] - '0') * 10 + s[j] - '0';
            if (ans % 8 == 0)
            {
                cout << "YES" << endl;
                cout << ans << endl;
                return;
            }
        }
    }
    for (ll i = 0; i < n; i++)
    {
        for (ll j = i + 1; j < n; j++)
        {
            for (ll k = j + 1; k < n; k++)
            {
                const ll ans = (s[i] - '0') * 100 + (s[j] - '0') * 10 + (s[k] - '0');
                if (ans % 8 == 0)
                {
                    cout << "YES" << endl;
                    cout << ans << endl;
                    return;
                }
            }
        }
    }
    cout << "NO" << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}