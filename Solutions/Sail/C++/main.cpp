// Problem: Sail
// Link to the problem: https://codeforces.com/contest/298/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, x1, y1, x2, y2;
    cin >> n >> x1 >> y1 >> x2 >> y2;
    string s;
    cin >> s;
    const ll x = x2 - x1, y = y2 - y1;
    if (x == 0 && y == 0)
    {
        cout << 0 << endl;
        return;
    }
    ll a = 0, b = 0;
    for (ll i = 0; i < n; i++)
    {
        if (x > 0 && x != a)
        {
            a += s[i] == 'E' ? 1 : 0;
        }
        if (x < 0 && x != a)
        {
            a -= s[i] == 'W' ? 1 : 0;
        }
        if (y > 0 && y != b)
        {
            b += s[i] == 'N' ? 1 : 0;
        }
        if (y < 0 && y != b)
        {
            b -= s[i] == 'S' ? 1 : 0;
        }
        if (x == a && y == b)
        {
            cout << i + 1 << endl;
            return;
        }
    }
    cout << -1 << endl;
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