// Problem: Maximum Rounding
// Link to the problem: https://codeforces.com/contest/1857/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    ll j = n;
    for (ll i = n - 1; i >= 1; i--)
    {
        if (s[i] >= '5')
        {
            s[i - 1] = s[i - 1] + 1 % 10;
            j = i;
        }
    }
    for (ll i = j; i < n; i++)
    {
        s[i] = '0';
    }
    if (s[0] >= '5')
    {
        for (ll i = 0; i < n; i++)
        {
            s[i] = '0';
        }
        s.insert(0, 1, '1');
    }
    cout << s << endl;
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