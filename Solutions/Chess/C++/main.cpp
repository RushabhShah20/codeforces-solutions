// Problem: Chess
// Link to the problem: https://codeforces.com/contest/38/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

bool isValid(const ll x, const ll y)
{
    return x >= 1 && x <= 8 && y >= 1 && y <= 8;
}

void solve()
{
    string r, k;
    cin >> r >> k;
    set<pair<ll, ll>> s;
    for (ll i = 1; i <= 8; i++)
    {
        s.insert({r[0] - 'a' + 1, i});
    }
    for (ll i = 1; i <= 8; i++)
    {
        s.insert({i, r[1] - '0'});
    }
    ll x = k[0] - 'a' + 1, y = k[1] - '0';
    s.insert({x, y});
    ll a = x - 1, b = y - 2;
    if (isValid(a, b))
    {
        s.insert({a, b});
    }
    a = x - 1;
    b = y + 2;
    if (isValid(a, b))
    {
        s.insert({a, b});
    }
    a = x + 1;
    b = y - 2;
    if (isValid(a, b))
    {
        s.insert({a, b});
    }
    a = x + 1;
    b = y + 2;
    if (isValid(a, b))
    {
        s.insert({a, b});
    }
    a = x - 2;
    b = y - 1;
    if (isValid(a, b))
    {
        s.insert({a, b});
    }
    a = x - 2;
    b = y + 1;
    if (isValid(a, b))
    {
        s.insert({a, b});
    }
    a = x + 2;
    b = y - 1;
    if (isValid(a, b))
    {
        s.insert({a, b});
    }
    a = x + 2;
    b = y + 1;
    if (isValid(a, b))
    {
        s.insert({a, b});
    }
    x = r[0] - 'a' + 1;
    y = r[1] - '0';
    a = x - 1, b = y - 2;
    if (isValid(a, b))
    {
        s.insert({a, b});
    }
    a = x - 1;
    b = y + 2;
    if (isValid(a, b))
    {
        s.insert({a, b});
    }
    a = x + 1;
    b = y - 2;
    if (isValid(a, b))
    {
        s.insert({a, b});
    }
    a = x + 1;
    b = y + 2;
    if (isValid(a, b))
    {
        s.insert({a, b});
    }
    a = x - 2;
    b = y - 1;
    if (isValid(a, b))
    {
        s.insert({a, b});
    }
    a = x - 2;
    b = y + 1;
    if (isValid(a, b))
    {
        s.insert({a, b});
    }
    a = x + 2;
    b = y - 1;
    if (isValid(a, b))
    {
        s.insert({a, b});
    }
    a = x + 2;
    b = y + 1;
    if (isValid(a, b))
    {
        s.insert({a, b});
    }
    const ll ans = 64 - s.size();
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