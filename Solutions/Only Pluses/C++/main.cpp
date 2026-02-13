// Problem: Only Pluses
// Link to the problem: https://codeforces.com/contest/1992/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    priority_queue<ll, vector<ll>, greater<ll>> pq;
    pq.push(a);
    pq.push(b);
    pq.push(c);
    for (ll i = 0; i < 5; i++)
    {
        ll x = pq.top();
        pq.pop();
        x++;
        pq.push(x);
    }
    ll ans = 1;
    while (!pq.empty())
    {
        ans *= pq.top();
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