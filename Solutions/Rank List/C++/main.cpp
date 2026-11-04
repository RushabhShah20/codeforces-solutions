// Problem: Rank List
// Link to the problem: https://codeforces.com/contest/166/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    k--;
    vector<pair<ll, ll>> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }
    sort(a.begin(), a.end(), [](const pair<ll, ll> &x, const pair<ll, ll> &y)
         {if(x.first==y.first){return x.second<y.second;}return x.first>y.first; });
    ll ans = 1;
    for (ll i = k - 1; i >= 0; i--)
    {
        if (a[i].first != a[k].first || a[i].second != a[k].second)
        {
            break;
        }
        ans++;
    }
    for (ll i = k + 1; i < n; i++)
    {
        if (a[i].first != a[k].first || a[i].second != a[k].second)
        {
            break;
        }
        ans++;
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
    solve();
    return 0;
}