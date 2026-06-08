// Problem: Tokitsukaze and All Zero Sequence
// Link to the problem: https://codeforces.com/contest/1678/problem/A
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
    sort(a.begin(), a.end());
    ll ans = 0;
    for (ll i = 1; i < n; i++)
    {
        if (a[i] == a[i - 1] && a[i] != 0)
        {
            ans++;
            a[i] = 0;
        }
    }
    sort(a.begin(), a.end());
    ans += a[0] == 0 ? 0 : (a[1] == 0 ? 0 : 1);
    for (ll i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            ans++;
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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}