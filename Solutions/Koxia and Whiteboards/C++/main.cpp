// Problem: Koxia and Whiteboards
// Link to the problem: https://codeforces.com/contest/1770/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    priority_queue<ll, vector<ll>, greater<ll>> pq;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        pq.push(x);
    }
    for (ll i = 0; i < m; i++)
    {
        ll x;
        cin >> x;
        pq.pop();
        pq.push(x);
    }
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ans += pq.top();
        pq.pop();
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