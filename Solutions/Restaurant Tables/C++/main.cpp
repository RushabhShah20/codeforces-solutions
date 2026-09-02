// Problem: Restaurant Tables
// Link to the problem: https://codeforces.com/contest/828/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, a, b;
    cin >> n >> a >> b;
    ll c = 0;
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x == 1)
        {
            if (a > 0)
            {
                a--;
            }
            else if (b > 0)
            {
                b--;
                c++;
            }
            else if (c > 0)
            {
                c--;
            }
            else
            {
                ans++;
            }
        }
        else
        {
            if (b > 0)
            {
                b--;
            }
            else
            {
                ans += 2;
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
    solve();
    return 0;
}