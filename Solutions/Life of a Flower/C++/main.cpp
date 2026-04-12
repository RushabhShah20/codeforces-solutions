// Problem: Life of a Flower
// Link to the problem: https://codeforces.com/contest/1585/problem/A
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
    ll ans = 1;
    for (ll i = 0; i < n; i++)
    {
        if (i == 0)
        {
            if (a[i] == 1)
            {
                ans++;
            }
        }
        else
        {
            if (a[i] == 1)
            {
                if (a[i - 1] == 1)
                {
                    ans += 5;
                }
                else
                {
                    ans++;
                }
            }
            else
            {
                if (a[i - 1] == 0)
                {
                    cout << -1 << endl;
                    return;
                }
            }
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