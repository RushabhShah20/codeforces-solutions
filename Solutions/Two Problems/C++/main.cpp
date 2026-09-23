// Problem: Two Problems
// Link to the problem: https://codeforces.com/contest/203/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x, y, a, b, c, d;
    cin >> x >> y >> a >> b >> c >> d;
    if (x == 0 || x == a || x == b)
    {
        cout << "YES" << endl;
        return;
    }
    for (ll i = 0; i < y; i++)
    {
        for (ll j = 0; j < y; j++)
        {
            if (a - i * c == x || b - j * d == x || a - i * c + b - j * d == x)
            {
                cout << "YES" << endl;
                return;
            }
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
    solve();
    return 0;
}