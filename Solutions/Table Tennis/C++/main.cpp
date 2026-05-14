// Problem: Table Tennis
// Link to the problem: https://codeforces.com/contest/879/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    deque<ll> q;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        q.push_back(x);
    }
    if (k >= n)
    {
        const ll ans = *max_element(q.begin(), q.end());
        cout << ans << endl;
    }
    else
    {
        unordered_map<ll, ll> m;
        while (m[q.front()] < k)
        {
            const ll x = q.front();
            q.pop_front();
            const ll y = q.front();
            q.pop_front();
            if (x > y)
            {
                m[x]++;
                q.push_front(x);
                q.push_back(y);
            }
            else
            {
                m[y]++;
                q.push_front(y);
                q.push_back(x);
            }
        }
        const ll ans = q.front();
        cout << ans << endl;
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