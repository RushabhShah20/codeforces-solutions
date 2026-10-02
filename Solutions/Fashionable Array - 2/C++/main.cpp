// Problem: Fashionable Array
// Link to the problem: https://codeforces.com/contest/2267/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(100);
    ll mx = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a[x - 1]++;
        mx = max(mx, a[x - 1]);
    }
    for (ll i = 1; i <= mx; i++)
    {
        for (ll j = 99; j >= 0; j--)
        {
            if (a[j] >= i)
            {
                cout << j + 1 << " ";
            }
        }
    }
    cout << endl;
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