// Problem: Milica and String
// Link to the problem: https://codeforces.com/contest/1898/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    ll x = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == 'B')
        {
            x++;
        }
    }
    if (x > k)
    {
        const ll y = x - k;
        cout << 1 << endl;
        ll z = 0;
        for (ll i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                z++;
            }
            if (y == z)
            {
                cout << i + 1 << " A" << endl;
                return;
            }
        }
    }
    else if (x < k)
    {
        const ll y = k - x;
        cout << 1 << endl;
        ll z = 0;
        for (ll i = 0; i < n; i++)
        {
            if (s[i] == 'A')
            {
                z++;
            }
            if (y == z)
            {
                cout << i + 1 << " B" << endl;
                return;
            }
        }
    }
    else
    {
        cout << 0 << endl;
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