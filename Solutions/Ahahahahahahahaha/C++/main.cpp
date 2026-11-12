// Problem: Ahahahahahahahaha
// Link to the problem: https://codeforces.com/contest/1407/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll x = 0, y = 0;
    for (ll i = 0; i < n; i++)
    {
        ll z;
        cin >> z;
        z & 1 ? x++ : y++;
    }
    const ll m = n >> 1;
    if (y >= m)
    {
        cout << y << endl;
        for (ll i = 0; i < y; i++)
        {
            cout << 0 << " ";
        }
    }
    else
    {
        if (x & 1)
        {
            x--;
        }
        cout << x << endl;
        for (ll i = 0; i < x; i++)
        {
            cout << 1 << " ";
        }
    }
    cout << endl;
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