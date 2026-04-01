// Problem: Bear and Five Cards
// Link to the problem: https://codeforces.com/contest/680/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a1, a2, a3, a4, a5;
    cin >> a1 >> a2 >> a3 >> a4 >> a5;
    vector<ll> a = {a1, a2, a3, a4, a5};
    sort(a.begin(), a.end());
    ll ans = a1 + a2 + a3 + a4 + a5;
    const ll y = ans;
    for (ll i = 0; i < 4; i++)
    {
        if (a[i] == a[i + 1])
        {
            const ll x = y - 2 * a[i];
            ans = min(ans, x);
        }
    }
    for (ll i = 0; i < 3; i++)
    {
        if (a[i] == a[i + 2])
        {
            const ll x = y - 3 * a[i];
            ans = min(ans, x);
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