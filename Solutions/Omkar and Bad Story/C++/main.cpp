// Problem: Omkar and Bad Story
// Link to the problem: https://codeforces.com/contest/1536/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll mn = LLONG_MAX, mx = LLONG_MIN;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        mn = min(mn, x);
        mx = max(mx, x);
    }
    if (mn < 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        cout << 101 << endl;
        for (ll i = 0; i <= 100; i++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
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