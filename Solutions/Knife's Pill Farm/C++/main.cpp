// Problem: Knife's Pill Farm
// Link to the problem: https://codeforces.com/contest/2264/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    priority_queue<ll> pq;
    ll ans = LLONG_MIN, x = 0;
    for (ll i = 0; i < n; i++)
    {
        if (m == 1)
        {
            ans = max(ans, a[i]);
        }
        else
        {
            if (pq.size() == m - 1)
            {
                ans = max(ans, m * a[i] - x);
            }
            pq.push(a[i]);
            x += a[i];
            if (pq.size() > m - 1)
            {
                x -= pq.top();
                pq.pop();
            }
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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}