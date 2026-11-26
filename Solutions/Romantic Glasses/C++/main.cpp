// Problem: Romantic Glasses
// Link to the problem: https://codeforces.com/contest/10/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll y = 0;
    set<ll> s;
    s.insert(0);
    bool z = false;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (i & 1)
        {
            y += x;
        }
        else
        {
            y -= x;
        }
        if (s.count(y) > 0)
        {
            z = true;
        }
        s.insert(y);
    }
    const string ans = z ? "YES" : "NO";
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