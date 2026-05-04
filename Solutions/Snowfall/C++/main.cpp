// Problem: Snowfall
// Link to the problem: https://codeforces.com/contest/2227/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a, b, c, d;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x % 2 == 0 && x % 3 == 0)
        {
            a.push_back(x);
        }
        else if (x % 2 != 0 && x % 3 == 0)
        {
            b.push_back(x);
        }
        else if (x % 2 == 0 && x % 3 != 0)
        {
            c.push_back(x);
        }
        else
        {
            d.push_back(x);
        }
    }
    vector<ll> ans;
    ans.insert(ans.end(), a.begin(), a.end());
    ans.insert(ans.end(), b.begin(), b.end());
    ans.insert(ans.end(), d.begin(), d.end());
    ans.insert(ans.end(), c.begin(), c.end());
    for (ll i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
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