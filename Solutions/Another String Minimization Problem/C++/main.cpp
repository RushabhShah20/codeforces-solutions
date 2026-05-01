// Problem: Another String Minimization Problem
// Link to the problem: https://codeforces.com/contest/1706/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    unordered_map<ll, ll> m;
    string ans(k, 'B');
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        m[min(x - 1, k - x)]++;
    }
    for (const pair<ll, ll> i : m)
    {
        if (i.second == 1)
        {
            const ll j = min(i.first, k - 1 - i.first);
            ans[j] = 'A';
        }
        else
        {
            ans[i.first] = 'A';
            ans[k - 1 - i.first] = 'A';
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