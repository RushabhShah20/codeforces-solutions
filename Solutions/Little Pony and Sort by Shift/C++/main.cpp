// Problem: Little Pony and Sort by Shift
// Link to the problem: https://codeforces.com/contest/454/problem/B
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
    ll x = 0, y = 0;
    for (ll i = 1; i < n; i++)
    {
        if (a[i] < a[i - 1])
        {
            x++;
            y = i;
        }
    }
    const ll ans = x == 0 ? 0 : (x == 1 && a[n - 1] <= a[0] ? n - y : -1);
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