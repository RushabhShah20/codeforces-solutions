// Problem: Robot's Task
// Link to the problem: https://codeforces.com/contest/583/problem/B
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
    vector<bool> b(n, false);
    ll ans = 0, m = n, i = 0, k = 0, x = 1;
    while (m > 0)
    {
        if (!b[i] && a[i] <= k)
        {
            b[i] = true;
            m--;
            k++;
        }
        if (m == 0)
        {
            break;
        }
        if (i + x < 0 || i + x >= n)
        {
            x *= -1;
            ans++;
        }
        else
        {
            i += x;
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