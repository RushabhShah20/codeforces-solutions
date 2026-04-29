// Problem: Substring Removal Game
// Link to the problem: https://codeforces.com/contest/1398/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    vector<ll> a;
    const ll n = s.size();
    ll x = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            x++;
        }
        else
        {
            if (x > 0)
            {
                a.push_back(x);
            }
            x = 0;
        }
    }
    if (x > 0)
    {
        a.push_back(x);
    }
    if (a.empty())
    {
        cout << 0 << endl;
        return;
    }
    sort(a.begin(), a.end(), greater<>());
    ll ans = 0;
    for (ll i = 0; i < a.size(); i += 2)
    {
        ans += a[i];
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