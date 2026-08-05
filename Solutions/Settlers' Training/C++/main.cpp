// Problem: Settlers' Training
// Link to the problem: https://codeforces.com/contest/63/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x < k)
        {
            a.push_back(x);
        }
    }
    const ll m = a.size();
    ll ans = 0;
    for (ll i = 0; i < m; i++)
    {
        ans = max(ans, k - a[i] + i);
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