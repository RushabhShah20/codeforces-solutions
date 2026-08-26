// Problem: Holidays
// Link to the problem: https://codeforces.com/contest/44/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<pair<ll, ll>> a(m);
    for (ll i = 0; i < m; i++)
    {
        cin >> a[i].first >> a[i].second;
    }
    vector<ll> b(n);
    for (ll i = 0; i < m; i++)
    {
        for (ll j = a[i].first - 1; j <= a[i].second - 1; j++)
        {
            b[j]++;
        }
    }
    for (ll j = 0; j < n; j++)
    {
        if (b[j] != 1)
        {
            cout << j + 1 << " " << b[j] << endl;
            return;
        }
    }
    cout << "OK" << endl;
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