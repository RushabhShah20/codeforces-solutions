// Problem: Strange Machine
// Link to the problem: https://codeforces.com/contest/2156/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    bool x = false;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == 'B')
        {
            x = true;
            break;
        }
    }
    for (ll i = 0; i < m; i++)
    {
        ll y;
        cin >> y;
        if (x)
        {
            ll ans = 0, j = 0;
            while (y > 0)
            {
                if (s[j] == 'A')
                {
                    y--;
                }
                else
                {
                    y >>= 1;
                }
                ans++;
                j = (j + 1) % n;
            }
            cout << ans << endl;
        }
        else
        {
            cout << y << endl;
        }
    }
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}