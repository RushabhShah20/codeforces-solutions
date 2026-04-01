// Problem: Madoka and Math Dad
// Link to the problem: https://codeforces.com/contest/1647/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    if (n % 3 == 1)
    {
        const ll x = 2 * (n / 3) + 1;
        string ans(x, ' ');
        for (ll i = 0; i < x; i++)
        {
            if (i % 2 == 0)
            {
                ans[i] = '1';
            }
            else
            {
                ans[i] = '2';
            }
        }
        cout << ans << endl;
    }
    else if (n % 3 == 2)
    {
        const ll x = 2 * (n / 3) + 1;
        string ans(x, ' ');
        for (ll i = 0; i < x; i++)
        {
            if (i % 2 == 0)
            {
                ans[i] = '2';
            }
            else
            {
                ans[i] = '1';
            }
        }
        cout << ans << endl;
    }
    else
    {
        const ll x = 2 * (n / 3);
        string ans(x, ' ');
        for (ll i = 0; i < x; i++)
        {
            if (i % 2 == 0)
            {
                ans[i] = '2';
            }
            else
            {
                ans[i] = '1';
            }
        }
        cout << ans << endl;
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