// Problem: Meaning Mean
// Link to the problem: https://codeforces.com/contest/2021/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    priority_queue<ll, vector<ll>, greater<>> pq;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        pq.push(x);
    }
    while (pq.size() > 1)
    {
        const ll x = pq.top();
        pq.pop();
        const ll y = pq.top();
        pq.pop();
        pq.push((x + y) / 2);
    }
    const ll ans = pq.top();
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