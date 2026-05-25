// Problem: Alice and Books
// Link to the problem: https://codeforces.com/contest/1978/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll ans = 0, x = LLONG_MIN;
    for (ll i = 0; i < n; i++)
    {
        ll z;
        cin >> z;
        if (i == n - 1)
        {
            ans += z;
        }
        else
        {
            x = max(x, z);
        }
    }
    ans += x;
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