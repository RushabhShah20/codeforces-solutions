// Problem: Preparation for International Women's Day
// Link to the problem: https://codeforces.com/contest/1133/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    unordered_map<ll, ll> m;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        m[x % k]++;
    }
    ll ans = 2 * (m[0] / 2);
    ll l = 1, r = k - 1;
    while (l <= r)
    {
        if (l == r)
        {
            ans += 2 * (m[l] / 2);
            break;
        }
        ans += 2 * min(m[l], m[r]);
        l++;
        r--;
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