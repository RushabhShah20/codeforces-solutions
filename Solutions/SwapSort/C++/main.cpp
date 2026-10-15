// Problem: SwapSort
// Link to the problem: https://codeforces.com/contest/489/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<pair<ll, ll>> ans;
    for (ll i = 0; i < n; i++)
    {
        ll k = i;
        for (ll j = i + 1; j < n; j++)
        {
            if (a[k] > a[j])
            {
                k = j;
            }
        }
        if (k != i)
        {
            ans.push_back({i, k});
            swap(a[i], a[k]);
        }
    }
    const ll m = ans.size();
    cout << m << endl;
    for (ll i = 0; i < m; i++)
    {
        cout << ans[i].first << " " << ans[i].second << endl;
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