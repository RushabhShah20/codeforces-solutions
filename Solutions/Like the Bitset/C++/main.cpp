// Problem: Like the Bitset
// Link to the problem: https://codeforces.com/contest/2136/problem/B
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
    ll m = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            m++;
        }
        else
        {
            m = 0;
        }
        if (m >= k)
        {
            cout << "NO" << endl;
            return;
        }
    }
    vector<ll> ans(n);
    ll x = 1;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            ans[i] = x;
            x++;
        }
    }
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            ans[i] = x;
            x++;
        }
    }
    cout << "YES" << endl;
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