// Problem: Game of Robots
// Link to the problem: https://codeforces.com/contest/670/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll p = 0, l = 1, r = n;
    while (l <= r)
    {
        const ll m = l + (r - l) / 2;
        if (m * (m + 1) / 2 < k)
        {
            p = m;
            l = m + 1;
        }
        else
        {
            r = m - 1;
        }
    }
    k -= p * (p + 1) / 2;
    const ll ans = a[k - 1];
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