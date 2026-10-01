// Problem: Sushi for Two
// Link to the problem: https://codeforces.com/contest/1138/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), b;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll x = 1;
    for (ll i = 1; i < n; i++)
    {
        if (a[i] == a[i - 1])
        {
            x++;
        }
        else
        {
            b.push_back(x);
            x = 1;
        }
    }
    b.push_back(x);
    const ll m = b.size();
    ll ans = 0;
    for (ll i = 1; i < m; i++)
    {
        ans = max(ans, 2 * min(b[i], b[i - 1]));
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