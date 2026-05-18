// Problem: Skier
// Link to the problem: https://codeforces.com/contest/1351/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    ll ans = 0, x = 0, y = 0;
    set<pair<pair<ll, ll>, pair<ll, ll>>> t;
    for (ll i = 0; i < n; i++)
    {
        ll a = x, b = y;
        if (s[i] == 'N')
        {
            a++;
        }
        if (s[i] == 'S')
        {
            a--;
        }
        if (s[i] == 'E')
        {
            b++;
        }
        if (s[i] == 'W')
        {
            b--;
        }
        if (t.count({{a, b}, {x, y}}) || t.count({{x, y}, {a, b}}))
        {
            ans++;
        }
        else
        {
            t.insert({{x, y}, {a, b}});
            ans += 5;
        }
        x = a;
        y = b;
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