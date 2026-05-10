// Problem: Alternating Deck (hard version)
// Link to the problem: https://codeforces.com/contest/1786/problem/A2
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    n--;
    ll a = 1, b = 0, c = 0, d = 0, i = 5, j = 0;
    while (n >= 0)
    {
        if (j & 1)
        {
            const ll x = min(n, i);
            a += (x + 1) / 2;
            b += x / 2;
        }
        else
        {
            const ll y = min(n, i);
            c += y / 2;
            d += (y + 1) / 2;
        }
        j++;
        n -= i;
        i += 4;
    }
    cout << a << " " << b << " " << c << " " << d << endl;
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