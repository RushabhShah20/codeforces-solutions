// Problem: Minimum Difficulty
// Link to the problem: https://codeforces.com/contest/496/problem/A
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
    vector<ll> d(n - 2);
    for (ll i = 1; i < n - 1; i++)
    {
        vector<ll> b = a;
        b.erase(b.begin() + i);
        for (ll j = 1; j < n - 1; j++)
        {
            d[i - 1] = max(d[i - 1], b[j] - b[j - 1]);
        }
    }
    ll ans = 1000;
    for (ll i = 0; i < n - 2; i++)
    {
        ans = min(ans, d[i]);
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