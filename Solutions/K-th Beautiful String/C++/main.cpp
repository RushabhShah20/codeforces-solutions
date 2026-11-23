// Problem: K-th Beautiful String
// Link to the problem: https://codeforces.com/contest/1328/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    string ans(n, 'a');
    ll z = 0, l = 0, r = n;
    while (l <= r)
    {
        const ll m = l + (r - l) / 2;
        if ((m * (m + 1)) >> 1 >= k)
        {
            z = m;
            r = m - 1;
        }
        else
        {
            l = m + 1;
        }
    }
    const ll y = n - 1 - z;
    k -= z * (z - 1) / 2;
    const ll x = n - k;
    ans[x] = 'b';
    ans[y] = 'b';
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