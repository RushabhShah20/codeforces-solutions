// Problem: Combination
// Link to the problem: https://codeforces.com/contest/155/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<pair<ll, ll>> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end(), [](const pair<ll, ll> &a, const pair<ll, ll> &b)
         {
            if (a.second == b.second)
        {
            return a.first > b.first;
        }
        return a.second > b.second; });
    ll ans = 0, i = 0, j = 1;
    while (i < n && j > 0)
    {
        ans += v[i].first;
        j += v[i].second;
        j--;
        i++;
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