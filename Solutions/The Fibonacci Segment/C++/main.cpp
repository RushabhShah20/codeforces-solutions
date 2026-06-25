// Problem: The Fibonacci Segment
// Link to the problem: https://codeforces.com/contest/365/problem/B
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
    if (n <= 2)
    {
        cout << n << endl;
        return;
    }
    ll ans = 2, x = 2;
    for (ll i = 2; i < n; i++)
    {
        if (a[i] == a[i - 1] + a[i - 2])
        {
            x++;
        }
        else
        {
            x = 2;
        }
        ans = max(ans, x);
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