// Problem: Greed
// Link to the problem: https://codeforces.com/contest/892/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll c = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        c += x;
    }
    ll a = 0, b = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x > a)
        {
            b = a;
            a = x;
        }
        else if (x > b)
        {
            b = x;
        }
    }
    const string ans = a + b >= c ? "YES" : "NO";
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