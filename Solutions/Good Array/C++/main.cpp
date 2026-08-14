// Problem: Good Array
// Link to the problem: https://codeforces.com/contest/1077/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<pair<ll, ll>> a(n);
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a[i] = {x, i + 1};
    }
    sort(a.begin(), a.end());
    vector<ll> b(n);
    for (ll i = 0; i < n; i++)
    {
        b[i] = i == 0 ? a[i].first : a[i].first + b[i - 1];
    }
    vector<ll> ans;
    for (ll i = 0; i < n - 1; i++)
    {
        if (b[n - 1] - a[i].first == 2 * a[n - 1].first)
        {
            ans.push_back(a[i].second);
        }
    }
    if (b[n - 1] - a[n - 1].first == 2 * a[n - 2].first)
    {
        ans.push_back(a[n - 1].second);
    }
    const ll m = ans.size();
    cout << m << endl;
    for (ll i = 0; i < m; i++)
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