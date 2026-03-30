// Problem: Determine Line
// Link to the problem: https://codeforces.com/contest/1056/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    unordered_map<ll, ll> m;
    for (ll i = 0; i < n; i++)
    {
        ll k;
        cin >> k;
        for (ll j = 0; j < k; j++)
        {
            ll x;
            cin >> x;
            m[x]++;
        }
    }
    vector<ll> ans;
    for (const pair<ll, ll> i : m)
    {
        if (i.second == n)
        {
            ans.push_back(i.first);
        }
    }
    for (ll i = 0; i < ans.size(); i++)
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
    solve();
    return 0;
}