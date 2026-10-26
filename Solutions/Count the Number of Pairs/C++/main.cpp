// Problem: Count the Number of Pairs
// Link to the problem: https://codeforces.com/contest/1800/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<pair<ll, ll>> a(26);
    for (ll i = 0; i < n; i++)
    {
        islower(s[i]) ? a[s[i] - 'a'].first++ : a[s[i] - 'A'].second++;
    }
    ll ans = 0;
    for (ll i = 0; i < 26; i++)
    {
        if (k > 0)
        {
            const ll x = abs(a[i].first - a[i].second), y = x >> 1;
            if (k >= y)
            {
                ans += min(a[i].first, a[i].second) + y;
                k -= y;
            }
            else
            {
                ans += min(a[i].first, a[i].second) + k;
                k = 0;
            }
        }
        else
        {
            ans += min(a[i].first, a[i].second);
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