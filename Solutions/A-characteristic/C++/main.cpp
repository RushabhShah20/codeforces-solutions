// Problem: A-characteristic
// Link to the problem: https://codeforces.com/contest/1823/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    for (ll i = 0; i < n; i++)
    {
        const ll a = i, b = n - i;
        const ll x = a * (a - 1) / 2, y = b * (b - 1) / 2;
        if (x + y == k)
        {
            cout << "YES" << endl;
            for (ll j = 0; j < a; j++)
            {
                cout << 1 << " ";
            }
            for (ll j = 0; j < b; j++)
            {
                cout << -1 << " ";
            }
            cout << endl;
            return;
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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}