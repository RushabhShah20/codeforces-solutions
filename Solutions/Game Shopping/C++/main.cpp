// Problem: Game Shopping
// Link to the problem: https://codeforces.com/contest/1009/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n);
    queue<ll> q;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < m; i++)
    {
        ll x;
        cin >> x;
        q.push(x);
    }
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        if (q.empty())
        {
            break;
        }
        if (a[i] <= q.front())
        {
            ans++;
            q.pop();
        }
    }
    cout << ans << endl;
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