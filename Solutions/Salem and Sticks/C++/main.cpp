// Problem: Salem and Sticks
// Link to the problem: https://codeforces.com/contest/1105/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll z = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        z = max(z, a[i]);
    }
    ll x = 1, y = 1000000000;
    for (ll i = 1; i <= 100; i++)
    {
        ll b = 0;
        for (ll j = 0; j < n; j++)
        {
            if (a[j] < i - 1)
            {
                b += i - 1 - a[j];
            }
            else if (a[j] > i + 1)
            {
                b += a[j] - i - 1;
            }
        }
        if (b < y)
        {
            y = b;
            x = i;
        }
    }
    cout << x << " " << y << endl;
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