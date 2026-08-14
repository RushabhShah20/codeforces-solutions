// Problem: Uninteresting Number
// Link to the problem: https://codeforces.com/contest/2050/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    ll a = 0, b = 0, x = 0;
    for (ll i = 0; i < n; i++)
    {
        x += s[i] - '0';
        a += s[i] == '2' ? 1 : 0;
        b += s[i] == '3' ? 1 : 0;
    }
    for (ll i = 0; i <= a; i++)
    {
        for (ll j = 0; j <= b; j++)
        {
            if ((x + 2 * i + 6 * j) % 9 == 0)
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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}