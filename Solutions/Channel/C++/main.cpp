// Problem: Channel
// Link to the problem: https://codeforces.com/contest/1863/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, a, q;
    cin >> n >> a >> q;
    string s;
    cin >> s;
    ll x = a, y = x;
    for (ll i = 0; i < q; i++)
    {
        if (s[i] == '+')
        {
            x++;
        }
        else
        {
            x--;
        }
        y = max(y, x);
    }
    if (y >= n)
    {
        cout << "YES" << endl;
    }
    else
    {
        ll z = 0;
        for (ll i = 0; i < q; i++)
        {
            if (s[i] == '+')
            {
                z++;
            }
        }
        if (a + z >= n)
        {
            cout << "MAYBE" << endl;
        }
        else
        {
            cout << "NO" << endl;
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