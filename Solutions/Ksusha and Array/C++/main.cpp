// Problem: Ksusha and Array
// Link to the problem: https://codeforces.com/contest/299/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll ans;
    set<ll> s;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        s.insert(x);
        if (i == 0)
        {
            ans = x;
        }
        else
        {
            ans = __gcd(ans, x);
        }
    }
    if (ans == 1)
    {
        if (s.find(ans) != s.end())
        {
            cout << 1 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    else
    {
        if (s.find(ans) != s.end())
        {
            cout << ans << endl;
        }
        else
        {
            cout << -1 << endl;
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