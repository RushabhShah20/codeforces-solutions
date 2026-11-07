// Problem: Waste Sorting
// Link to the problem: https://codeforces.com/contest/1468/problem/N
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    vector<ll> a(3), b(5);
    for (ll i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < 5; i++)
    {
        cin >> b[i];
    }
    for (ll i = 0; i < 3; i++)
    {
        if (a[i] < b[i])
        {
            cout << "NO" << endl;
            return;
        }
        a[i] -= b[i];
    }
    const ll x = min(a[0], b[3]);
    a[0] -= x;
    b[3] -= x;
    const ll y = min(a[1], b[4]);
    a[1] -= y;
    b[4] -= y;
    const string ans = b[3] + b[4] > a[2] ? "NO" : "YES";
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