// Problem: Beautiful Numbers
// Link to the problem: https://codeforces.com/contest/2203/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    ll x = s[0] - '0';
    vector<ll> a;
    a.push_back(s[0] - '0' - 1);
    for (ll i = 1; i < n; i++)
    {
        const ll y = s[i] - '0';
        x += y;
        a.push_back(y);
    }
    ll ans = 0;
    sort(a.begin(), a.end(), greater<>());
    for (ll i = 0; i < n; i++)
    {
        if (x >= 10)
        {
            ans++;
            x -= a[i];
        }
        else
        {
            break;
        }
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