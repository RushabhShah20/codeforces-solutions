// Problem: Negatives and Positives
// Link to the problem: https://codeforces.com/contest/1791/problem/E
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, z = 0, mn = LLONG_MAX, y = 0;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x < 0)
        {
            z++;
        }
        y += abs(x);
        mn = min(mn, abs(x));
    }
    if (z % 2 == 0)
    {
        cout << y << endl;
    }
    else
    {
        cout << y - 2 * mn << endl;
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