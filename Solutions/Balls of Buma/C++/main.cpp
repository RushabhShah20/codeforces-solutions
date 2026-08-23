// Problem: Balls of Buma
// Link to the problem: https://codeforces.com/contest/1267/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    vector<pair<char, ll>> a;
    ll x = 1;
    for (ll i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
        {
            x++;
        }
        else
        {
            a.push_back({s[i - 1], x});
            x = 1;
        }
    }
    a.push_back({s[n - 1], x});
    const ll m = a.size();
    if (m & 1)
    {
        ll ans = 0, l = 0, r = m - 1;
        while (l <= r)
        {
            if (l == r)
            {
                ans = a[l].second >= 2 ? a[l].second + 1 : 0;
                break;
            }
            if (a[l].first == a[r].first && a[l].second + a[r].second >= 3)
            {
                l++;
                r--;
            }
            else
            {
                cout << 0 << endl;
                return;
            }
        }
        cout << ans << endl;
    }
    else
    {
        cout << 0 << endl;
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