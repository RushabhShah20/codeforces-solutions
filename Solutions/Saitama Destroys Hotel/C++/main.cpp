// Problem: Saitama Destroys Hotel
// Link to the problem: https://codeforces.com/contest/608/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<pair<ll, ll>> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }
    sort(a.begin(), a.end(), greater<>());
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        if (i == 0)
        {
            ans += k - a[i].first;
        }
        else
        {
            ans += a[i - 1].first - a[i].first;
        }
        ans += max(0LL, a[i].second - ans);
    }
    ans += a[n - 1].first;
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