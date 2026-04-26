// Problem: Series of Crimes
// Link to the problem: https://codeforces.com/contest/181/problem/A
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
    unordered_map<ll, ll> a, b;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            if (s[i][j] == '*')
            {
                a[i + 1]++;
                b[j + 1]++;
            }
        }
    }
    ll x = 0, y = 0;
    for (const pair<ll, ll> i : a)
    {
        if (i.second == 1)
        {
            x = i.first;
            break;
        }
    }
    for (const pair<ll, ll> i : b)
    {
        if (i.second == 1)
        {
            y = i.first;
            break;
        }
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