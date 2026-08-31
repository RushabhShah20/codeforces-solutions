// Problem: Sockets
// Link to the problem: https://codeforces.com/contest/257/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (k >= m)
    {
        cout << 0 << endl;
        return;
    }
    ll x = 0;
    sort(a.begin(), a.end(), greater<>());
    for (ll i = 0; i < n; i++)
    {
        if (k > 0)
        {
            if (m > a[i] + k - 1)
            {
                m -= a[i];
                x++;
            }
            else
            {
                if (m > 0)
                {
                    m = 0;
                    x++;
                }
                break;
            }
            k--;
        }
        else
        {
            if (m > a[i] - 1)
            {
                m -= a[i] - 1;
                x++;
            }
            else
            {
                if (m > 0)
                {
                    m = 0;
                    x++;
                }
                break;
            }
        }
    }
    const ll ans = m > 0 ? -1 : x;
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