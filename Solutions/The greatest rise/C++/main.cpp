// Problem: The greatest rise
// Link to the problem: https://codeforces.com/contest/648/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<string> s(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    vector<ll> a(m);
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            a[j] += s[i][j] == '*' ? 1 : 0;
        }
    }
    ll x = 0, y = 0;
    for (ll i = 1; i < m; i++)
    {
        x = max(x, a[i] - a[i - 1]);
        y = max(y, a[i - 1] - a[i]);
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