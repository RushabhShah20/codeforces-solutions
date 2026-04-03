// Problem: Parity Alternated Deletions
// Link to the problem: https://codeforces.com/contest/1144/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    priority_queue<ll> e, o;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x & 1)
        {
            o.push(x);
        }
        else
        {
            e.push(x);
        }
    }
    const ll p = o.size(), q = e.size();
    if (p == 0)
    {
        e.pop();
        ll ans = 0;
        while (!e.empty())
        {
            ans += e.top();
            e.pop();
        }
        cout << ans << endl;
    }
    else if (q == 0)
    {
        o.pop();
        ll ans = 0;
        while (!o.empty())
        {
            ans += o.top();
            o.pop();
        }
        cout << ans << endl;
    }
    else
    {
        if (abs(p - q) <= 1)
        {
            cout << 0 << endl;
        }
        else
        {
            ll ans = 0;
            if (p > q)
            {
                ll i = 0;
                while (!o.empty() && !e.empty())
                {
                    if (i & 1)
                    {
                        e.pop();
                    }
                    else
                    {
                        o.pop();
                    }
                    i++;
                }
                o.pop();
                while (!o.empty())
                {
                    ans += o.top();
                    o.pop();
                }
            }
            else
            {
                ll i = 0;
                while (!o.empty() && !e.empty())
                {
                    if (i & 1)
                    {
                        o.pop();
                    }
                    else
                    {
                        e.pop();
                    }
                    i++;
                }
                e.pop();
                while (!e.empty())
                {
                    ans += e.top();
                    e.pop();
                }
            }
            cout << ans << endl;
        }
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