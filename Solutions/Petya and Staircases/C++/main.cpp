// Problem: Petya and Staircases
// Link to the problem: https://codeforces.com/contest/362/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> a(m);
    for (ll i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    if (m == 0)
    {
        cout << "YES" << endl;
        return;
    }
    sort(a.begin(), a.end());
    if (a[0] == 1 || a[m - 1] == n)
    {
        cout << "NO" << endl;
        return;
    }
    for (ll i = 1; i < m - 1; i++)
    {
        if (a[i] == a[i - 1] + 1 && a[i] == a[i + 1] - 1)
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