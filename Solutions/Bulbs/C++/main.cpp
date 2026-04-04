// Problem: Bulbs
// Link to the problem: https://codeforces.com/contest/615/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<bool> a(m, false);
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        for (ll j = 0; j < x; j++)
        {
            ll y;
            cin >> y;
            a[y - 1] = true;
        }
    }
    for (ll i = 0; i < m; i++)
    {
        if (!a[i])
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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