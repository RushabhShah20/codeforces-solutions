// Problem: Sereja and Stairs
// Link to the problem: https://codeforces.com/contest/381/problem/B
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
        ll x;
        cin >> x;
        m[x]++;
    }
    vector<pair<ll, ll>> a(m.begin(), m.end());
    const ll p = a.size();
    sort(a.begin(), a.end());
    vector<ll> ans;
    for (ll i = 0; i < p; i++)
    {
        ans.push_back(a[i].first);
    }
    for (ll i = p - 2; i >= 0; i--)
    {
        if (a[i].second > 1)
        {
            ans.push_back(a[i].first);
        }
    }
    const ll k = ans.size();
    cout << k << endl;
    for (ll i = 0; i < k; i++)
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