// Problem: Word Game
// Link to the problem: https://codeforces.com/contest/1722/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    unordered_map<string, ll> m;
    vector<string> a(n), b(n), c(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        m[a[i]]++;
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
        m[b[i]]++;
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> c[i];
        m[c[i]]++;
    }
    vector<ll> ans(3, 0);
    for (ll i = 0; i < n; i++)
    {
        if (m[a[i]] == 1)
        {
            ans[0] += 3;
        }
        if (m[a[i]] == 2)
        {
            ans[0] += 1;
        }
    }
    for (ll i = 0; i < n; i++)
    {
        if (m[b[i]] == 1)
        {
            ans[1] += 3;
        }
        if (m[b[i]] == 2)
        {
            ans[1] += 1;
        }
    }
    for (ll i = 0; i < n; i++)
    {
        if (m[c[i]] == 1)
        {
            ans[2] += 3;
        }
        if (m[c[i]] == 2)
        {
            ans[2] += 1;
        }
    }
    for (ll i = 0; i < 3; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
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