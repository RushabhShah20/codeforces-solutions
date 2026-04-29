// Problem: Subtle Substring Subtraction
// Link to the problem: https://codeforces.com/contest/1673/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    if (n == 1)
    {
        cout << "Bob " << s[0] - 'a' + 1 << endl;
    }
    else
    {
        ll x = 0;
        for (ll i = 0; i < n; i++)
        {
            x += s[i] - 'a' + 1;
        }
        const ll ans = max(x - 2 * (s[0] - 'a' + 1), x - 2 * (s[n - 1] - 'a' + 1));
        cout << "Alice ";
        if (n & 1)
        {
            cout << ans << endl;
        }
        else
        {
            cout << x << endl;
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