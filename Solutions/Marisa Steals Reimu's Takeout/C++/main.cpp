// Problem: Marisa Steals Reimu's Takeout
// Link to the problem: https://codeforces.com/contest/2228/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll a = 0, b = 0, c = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x == 1)
        {
            a++;
        }
        else if (x == 2)
        {
            b++;
        }
        else
        {
            c++;
        }
    }
    const ll d = min(a, b);
    a -= d;
    b -= d;
    const ll ans = c + d + a / 3 + b / 3;
    cout << ans << endl;
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