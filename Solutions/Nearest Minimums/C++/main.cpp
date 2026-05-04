// Problem: Nearest Minimums
// Link to the problem: https://codeforces.com/contest/911/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, mn = LLONG_MAX;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        mn = min(mn, a[i]);
    }
    ll ans = LLONG_MAX, j = -1;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] == mn)
        {
            if (j != -1)
            {
                ans = min(ans, i - j);
            }
            j = i;
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