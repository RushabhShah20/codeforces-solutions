// Problem: Non-alternating Deck (easy version)
// Link to the problem: https://codeforces.com/contest/1786/problem/A1
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    n--;
    ll x = 1, y = 0, i = 5, j = 0;
    while (n >= 0)
    {
        if (j & 1)
        {
            x += min(n, i);
        }
        else
        {
            y += min(n, i);
        }
        j++;
        n -= i;
        i += 4;
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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}