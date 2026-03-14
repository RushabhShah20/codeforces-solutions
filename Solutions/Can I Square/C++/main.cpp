// Problem: Can I Square?
// Link to the problem: https://codeforces.com/contest/1915/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll a = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a += x;
    }
    const ll y = (ll)sqrtl(a);
    if (y * y == a)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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