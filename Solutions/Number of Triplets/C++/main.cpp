// Problem: Number of Triplets
// Link to the problem: https://codeforces.com/contest/181/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

bool z[2005][2005];

void solve()
{
    ll n;
    cin >> n;
    vector<pair<ll, ll>> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
        z[a[i].first + 1000][a[i].second + 1000] = true;
    }
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = i + 1; j < n; j++)
        {
            const ll b = a[i].first + a[j].first, c = a[i].second + a[j].second;
            if (b % 2 == 0 && c % 2 == 0)
            {
                const ll x = b / 2, y = c / 2;
                if (z[x + 1000][y + 1000])
                {
                    ans++;
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
    solve();
    return 0;
}