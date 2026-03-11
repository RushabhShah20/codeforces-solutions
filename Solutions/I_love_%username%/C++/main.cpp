// Problem: I_love_%username%
// Link to the problem: https://codeforces.com/contest/155/problem/A
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
    ll ans = 0, mn = a[0], mx = a[0];
    for (ll i = 1; i < n; i++)
    {
        if (a[i] > mx)
        {
            ans++;
            mx = a[i];
        }
        if (a[i] < mn)
        {
            ans++;
            mn = a[i];
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