// Problem: Ilya and a Colorful Walk
// Link to the problem: https://codeforces.com/contest/1119/problem/A
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
    ll ans = 0;
    for (ll i = n - 1; i >= 0; i--)
    {
        if (a[i] != a[0])
        {
            ans = max(ans, i);
            break;
        }
    }
    for (ll i = 0; i < n; i++)
    {
        if (a[i] != a[n - 1])
        {
            ans = max(ans, n - 1 - i);
            break;
        }
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