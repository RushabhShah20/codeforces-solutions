// Problem: MIN-MEX Cut
// Link to the problem: https://codeforces.com/contest/1566/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    vector<ll> a;
    ll x = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '0')
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
    const ll ans = (a.empty() ? 0 : (a.size() == 1 ? 1 : 2));
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