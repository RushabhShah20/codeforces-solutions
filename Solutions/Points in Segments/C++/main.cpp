// Problem: Points in Segments
// Link to the problem: https://codeforces.com/contest/1015/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<bool> a(m, true);
    for (ll i = 0; i < n; i++)
    {
        ll l, r;
        cin >> l >> r;
        for (ll j = l - 1; j <= r - 1; j++)
        {
            a[j] = false;
        }
    }
    vector<ll> ans;
    for (ll i = 0; i < m; i++)
    {
        if (a[i])
        {
            ans.push_back(i + 1);
        }
    }
    const ll p = ans.size();
    cout << p << endl;
    for (ll i = 0; i < p; i++)
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
    solve();
    return 0;
}