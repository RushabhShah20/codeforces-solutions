// Problem: Bear and Elections
// Link to the problem: https://codeforces.com/contest/574/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll y;
    priority_queue<ll> pq;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (i == 0)
        {
            y = x;
        }
        else
        {
            pq.push(x);
        }
    }
    ll ans = 0;
    while (!pq.empty())
    {
        const ll z = pq.top();
        if (y > z)
        {
            break;
        }
        ans++;
        y++;
        pq.pop();
        pq.push(z - 1);
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