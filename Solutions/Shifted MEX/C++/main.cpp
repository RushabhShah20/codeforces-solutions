// Problem: Shifted MEX
// Link to the problem: https://codeforces.com/contest/2185/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    set<ll> s;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        s.insert(x);
    }
    const vector<ll> a(s.begin(), s.end());
    ll ans = 0, x = 0;
    for (ll i = 0; i < a.size(); i++)
    {
        if (i > 0 && a[i] == a[i - 1] + 1)
        {
            x++;
        }
        else
        {
            x = 1;
        }
        ans = max(ans, x);
    }
    cout << ans << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}