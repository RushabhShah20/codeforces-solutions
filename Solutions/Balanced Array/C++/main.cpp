// Problem: Balanced Array
// Link to the problem: https://codeforces.com/contest/1343/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    if (n % 4 == 0)
    {
        cout << "YES" << endl;
        for (ll i = 1; i <= n / 2; i++)
        {
            cout << 2 * i << " ";
        }
        for (ll i = 1; i < n / 2; i++)
        {
            cout << 2 * i - 1 << " ";
        }
        const ll x = n / 2 * (n / 2 + 1) - (n / 2 - 1) * (n / 2 - 1);
        cout << x << endl;
    }
    else
    {
        cout << "NO" << endl;
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