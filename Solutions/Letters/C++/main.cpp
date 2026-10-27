// Problem: Letters
// Link to the problem: https://codeforces.com/contest/978/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n), b(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
        if (i > 0)
        {
            b[i] += b[i - 1];
        }
    }
    for (ll i = 0; i < m; i++)
    {
        ll z;
        cin >> z;
        const ll x = lower_bound(b.begin(), b.end(), z) - b.begin() + 1, y = a[x - 1] - b[x - 1] + z;
        cout << x << " " << y << endl;
    }
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