// Problem: Airport
// Link to the problem: https://codeforces.com/contest/218/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    priority_queue<ll> a;
    priority_queue<ll, vector<ll>, greater<>> b;
    for (ll i = 0; i < m; i++)
    {
        ll z;
        cin >> z;
        a.push(z);
        b.push(z);
    }
    ll x = 0, y = 0;
    for (ll i = 0; i < n; i++)
    {
        const ll c = a.top(), d = b.top();
        a.pop();
        b.pop();
        x += c;
        y += d;
        if (c > 1)
        {
            a.push(c - 1);
        }
        if (d > 1)
        {
            b.push(d - 1);
        }
    }
    cout << x << " " << y << endl;
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