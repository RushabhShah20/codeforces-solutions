// Problem: Tiles Comeback
// Link to the problem: https://codeforces.com/contest/1851/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    unordered_map<ll, ll> m;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        m[a[i]]++;
    }
    if (a[0] == a[n - 1])
    {
        const string ans = m[a[0]] >= k ? "YES" : "NO";
        cout << ans << endl;
    }
    else
    {
        ll x = 0, i = -1, j = -1;
        for (ll l = 0; l < n; l++)
        {
            if (a[l] == a[0])
            {
                x++;
            }
            if (x == k)
            {
                i = l;
                break;
            }
        }
        x = 0;
        for (ll r = n - 1; r >= 0; r--)
        {
            if (a[r] == a[n - 1])
            {
                x++;
            }
            if (x == k)
            {
                j = r;
                break;
            }
        }
        const string ans = i != -1 && j != -1 && i < j ? "YES" : "NO";
        cout << ans << endl;
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